class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
     // sort the array 
     sort(nums.begin() , nums.end());

      vector<vector<int>> ans;
     // 4 sum -> 3 sum -> 2sum : two pointer 

     for(int i=0; i<n-3; i++){

        // skip duplicate value for 1st element 
        if(i>0 && nums[i] == nums[i-1]) continue;

        for(int j =i+1; j<n-2; j++){

        // skip duplicate value for 2nd element 
        if(j>i+1 && nums[j] == nums[j-1]) continue;
            // 2 sum using two pointer 
            //two sum = x 
            long long x = (long long)target - nums[i] - nums[j];  // long long for interger overflow

            long long st = j+1 , end = n-1;

            while( st < end ){
                if(nums[st] + nums[end] == x) {
                        ans.push_back({nums[i] , nums[j] , nums[st] , nums[end]});
                         
                        st++;
                        end--;

               // skip duplicate value for 3rd and 4th element 

               while( st < end && nums[st] == nums[st -1]) st++;
               while(st < end && nums[end] == nums[end + 1]) end --;         

                }

                  else if(nums[st] + nums[end] > x)
                            end --;

                    else
                        st++;              
            }
        }
     }
        return ans;
    }
};