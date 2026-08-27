class Solution {
public:
    int search(vector<int>& arr, int target) {

     int st = 0 , end = arr.size() -1 , mid;
      
      while( st <= end){

        mid = st + (end -st)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] >= arr[0]){
            // left side sorted 
            // go left side 
            if(arr[st] <= target && target < arr[mid])
               end = mid -1;

               // go right 
               else 
                   st = mid +1;
        }
        else {
            // right side sorted 

            // go right 
            if(arr[mid] <= target && target <= arr[end])
              st = mid +1 ;

              else {
                // go left 
                end = mid -1;
              }
          
        }
      }
      return -1;
    }
};