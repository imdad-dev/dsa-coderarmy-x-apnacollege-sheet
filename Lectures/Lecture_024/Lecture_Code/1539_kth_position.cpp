class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int st = 0 , end = arr.size()-1 , mid;
       int idx =arr.size(); // n

       while( st <= end) {
         mid = st + ( end -st)/2;

         // how many number missing ,  arr[i] - i  -1 >= k

         if(arr[mid] - mid -1 >= k){
            idx = mid;
            // left 
            end = mid -1;
         } else {
            st = mid + 1;
         }
       };
       
       int ans = idx + k;
  
        return ans;
    }
};