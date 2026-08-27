class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        
        int n = arr.size() ,  st = 0 , end = n -1 , mid;
         
         while(st < end){
            mid = st + (end -st)/2;

            if(arr[mid] < arr[mid + 1]){
                // moved right 
                st = mid + 1;
            }
            else {
                // go left but mid can be ans 
                end = mid;
            }
         }

         return st;
    }
};



// M-2 
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        
        int n = arr.size() ,  st = 0 , end = n -1 , mid;

        if(n ==1 ) return 0;

        while(st <= end){
            
            mid = end + (st-end)/2;
             
          // edge case handle mid = 0 , n-1 ;
           if(mid == 0 ) return mid;
           else if (mid == n-1){

            if(arr[mid] > arr[mid -1]) return mid;
            else return mid -1;
           }

           else if(arr[mid] > arr[mid-1] && arr[mid]> arr[mid+1]){
                return mid;
            }

           // right side 
            else if(arr[mid] > arr[mid-1]){
                st = mid + 1;
            }

            // left side 
            else {
                end = mid -1;
            }
        }
        return -1;
    }
};