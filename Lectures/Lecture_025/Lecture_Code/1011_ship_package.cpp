class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n = weights.size();

        int st =0 , end =0 , mid , ans;

        for(int i=0; i<n; i++){

            st =max(st , weights[i]);
            end +=weights[i];
        }

        while(st <= end){

            mid = st + (end -st)/2;

            // track ship weights carry and days 

            int capacity =0 , countDay =1;
              for(int i=0; i<n; i++){

                capacity += weights[i];

                if(capacity > mid){
                    countDay++;
                    capacity = weights[i];
                }
              }

              if(countDay <= days){

                 ans = mid;
                 //move left 
                 end = mid -1;
              } 
              else st=mid +1;

        };

        return ans;
    }
};