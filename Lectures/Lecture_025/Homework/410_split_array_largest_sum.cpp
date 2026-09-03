class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        
        int n = nums.size();

        int st =0 , end =0 , mid , ans;

        for(int i=0; i<n; i++){
            
            st=max(st , nums[i]);
            end += nums[i];
        };

        while(st <= end){

            mid = st + (end -st)/2;

            // sum the subArray , count no of split 

            int subArray = 0 , count =1;

            for(int i=0; i<n; i++){

                subArray += nums[i];

                if(subArray > mid ){

                     count++;

                     subArray = nums[i];
                }
            }


            if( count <= k){
                ans = mid;
                //move left side 
                end = mid -1;
            } 
            else st = mid + 1;
        }

        return ans;
    }
};