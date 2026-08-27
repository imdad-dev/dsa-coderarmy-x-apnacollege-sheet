class Solution {
public:
    bool search(vector<int>& nums, int target) {

     int st = 0 , end = nums.size()-1  , mid;

     while( st<= end){

        // find mid 
        mid = st + (end -st)/2;

        // found 
        if(nums[mid]==target) return true;
        
         // [1,0,1,1,1]
        // handle duplicate mid = st = end cond. , can't decide which part is sorted 
        // but we sure this st , end not our answer any more

         else if (nums[mid] == nums[st] && nums[mid] == nums[end]){
            st++;
            end--;
         }

     // if left side sorted , then check range to go left or right 
     // not nums[0]--> bex duplicate value 
        else if (nums[mid] >= nums[st]){

            // if range st <= target <= mid --> left side 
            if (nums[st]<= target && target<=nums[mid]) 
                    end = mid -1;
                
                else st = mid +1;
        }

        // if right side sorted , then check range  right or left side move
        else {
        // mid <= taget<= end --> move right 
        if(nums[mid]<= target && target <= nums[end]) 
                st = mid +1;
               else end = mid -1;
        }
     } 

     return false;  
    }
};