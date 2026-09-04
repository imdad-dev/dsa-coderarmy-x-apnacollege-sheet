class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int st =0 , end = 0 , mid , n =piles.size() , ans;

        // st = sum/h , end = max of array 
   long long sum =0;
        for(int i=0; i<n; i++){

            sum += piles[i];
            end = max(end , piles[i]);
        }

        st = sum/h;

        if( !st )    // st == 0
           st = 1;

   while(st <= end ){
      
      mid = st + (end -st)/2;

      //mid banana consumed per hour 

      // track total time if  rem != 0 then  add time ++ 

      int total_time =0;

      for(int i=0; i<n; i++){

        total_time += piles[i]/mid;

        // for remaing fraction part 
        if(piles[i] % mid ){
            total_time++;
        }
      }
    
    if(total_time <= h){

        // eating possible 
        ans = mid;
        
        //move left 
        end = mid -1;
    }  

    else st = mid + 1;
   
   }
   
   return ans;
    }
};