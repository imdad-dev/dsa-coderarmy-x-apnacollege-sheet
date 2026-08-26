class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x)
    {
       
    int first = 0 , last = -1 , mid;
    
      int st = 0 , end = n-1;
      
      while(st <= end){
          
          // for first occurence 
          
          mid = st + (end -st)/2;
          
          if(arr[mid] == target){
              first = mid;
              // go left 
              end = mid -1;
          }
          else if(arr[mid]< target){
              // go right 
              st = mid + 1;
          }
          else {
              end = mid-1;
          }
      }
      
      // for last occurrenc
      
              st = 0 , end = n-1;
      
      while(st <= end){
          
          // for first occurence 
          
          mid = st + (end -st)/2;
          
          if(arr[mid] == target){
              last = mid;
              // go right 
              st= mid +1;
          }
          else if(arr[mid]< target){
              // go right 
              st = mid + 1;
          }
          else {
              end = mid-1;
          }
      }
      
      // to handle not found element first = 0 (-1 + 1 = 0)
      int noOfOccurrence = (last - first) +1;
     
     return noOfOccurrence;
    }
};


