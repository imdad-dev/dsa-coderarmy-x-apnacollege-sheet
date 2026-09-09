class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
       int n = nums.size();
        // sort the array 
        sort(nums.begin() , nums.end());


        // 3 sum convert two sum using two pointer approch
          
          vector<vector<int>> ans;

        for(int i=0; i<n-2; i++){

            // Skip duplicate values for the first elemen

            if( i>0 && nums[i] == nums[i-1])  continue;

           int nextTwosum = 0 - nums[i];

          int st = i+1 , end = n-1;
           // two pointer 2 sum approch 

           while(st < end ){

            if(nums[st] + nums[end] == nextTwosum ){
                // push 1 row 
                  ans.push_back({nums[i] , nums[st] , nums[end]});
                  st++;
                  end--;
                // skip duplicate value for 2nd and 3rd element 

                while( st < end && nums[st] == nums[st -1]) st++;
                while( st < end && nums[end] == nums[end + 1]) end--;
            }

            else if(nums[st] + nums[end] > nextTwosum)
                       end--;

                 else 
                      st++;      
           }
           
        }

      return ans;       
    }
};