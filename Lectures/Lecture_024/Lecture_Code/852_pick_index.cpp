//Sir approach
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        int st =0 , end = n-1 , mid;

        while(st <= end){

            /*
             DRY run : [1 , 6 , 4 , 3 , 2] in both mid formula 
             st + (end-st)/2 → gives the lower mid (rounds down)
            end + (st-end)/2 → gives the upper mid (rounds up)
            */
              mid = end + (st -end)/2;

              // mid 
           if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]){
                 return mid;
           } 

            // right side 
           else if( arr[mid] > arr[mid -1]) {
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

// My Approach
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 0, end = n - 1, mid;
        while (start < end) {
            mid = start + ((end - start) / 2);
            if (arr[mid] < arr[mid + 1])
                start = mid + 1;
            else
                end = mid;
        }
        return start;
    }
};