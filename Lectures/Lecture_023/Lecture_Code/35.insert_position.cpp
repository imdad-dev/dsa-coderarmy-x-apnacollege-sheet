class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();

        int str =0 , end = n-1 , mid;
        int idx =n;

        while(str <= end){

            mid = str + (end -str)/2;

            if( nums[mid] == target){
                //update idx & break the loop 
                idx = mid;
                break;
            }
              
              else if(nums[mid] < target){
                // right , no need idx update 
                str = mid + 1;
              }
              else {
                // left , first update idx
                idx = mid;
                end = mid -1;
              }
        }
        return idx;
    }
};