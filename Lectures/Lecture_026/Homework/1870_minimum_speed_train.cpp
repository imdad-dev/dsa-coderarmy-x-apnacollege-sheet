class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int n = dist.size();
        long long st =1 , end = 10000000 , mid , ans = -1;  // end = 10^7

         if(n -1 >= hour)  return -1;  // except last on every train must a whole number , if not then wait hour 
        while(st <= end ){
            mid = st + (end -st)/2;

            // mid is min speed consumed per kh 

            double total_time = 0;

            for( int i =0; i<n-1; i++){

                total_time += dist[i]/mid;

                if(dist[i] % mid){
                    total_time++;
                }
            };

            // last train no need to wait 
              total_time += (double)dist[n-1]/mid;

              if(total_time <= hour ){
         // ans can be possible , store and for min moved left 
                ans = mid ;
                end = mid -1;
              }

              else  st = mid + 1;

        }

        return (int)ans;
    }
};