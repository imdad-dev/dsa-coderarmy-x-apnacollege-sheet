class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int st =0 , end=nums.size() -1 , mid;

        int ans = nums[0];

        while(st <= end){

            mid = st + (end -st)/2;

            if ( nums[mid] >= nums[0]){
             // left side sorted or arr[mid]==arr[0]
             // go right side 
             st = mid + 1;

            }
            else {

                // arr[mid] < arr[0] .. > right sided sorted 
                // store ans & go left side 
               ans = nums[mid];
               end = mid -1;
                
            }
        }
        return ans;
    }
};