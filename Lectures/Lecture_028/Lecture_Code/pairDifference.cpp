
// time complexcity : O(n log n) + O(n) = O(n log n) (the sort dominates).

class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
      int n = arr.size();
      
      if (x < 0) x = -x;  // more safty of negative x  
      
       // sort array 
        sort(arr.begin() , arr.end());
       
      int st = 0 , end = 1;
      
      while(end < n){
          
          int diff = arr[end] - arr[st];
          
          // subtraction equal to x 
          if(diff == x)
             return 1;
        
        // sub. less than x 
        else if ( diff < x )
                end++;
                
        // sub. greater than x         
         else  st++;   
         
         if( st == end)
             end++;
      }
      
      return false;
    }
};






// binary search : O(nlongn)
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        
    int n = arr.size();
    
  if (x < 0) x = -x;          // work with absolute difference
    
     sort(arr.begin() , arr.end());
     
     if (x == 0) {
         // need two DIFFERENT elements with the same value
         for (int i = 1; i < n; i++) {
             if (arr[i] == arr[i - 1]) return true;
         }
         return false;
     }
     
      
     for(int i=0; i<n; i++){
         
         int target = arr[i] + x;
         
        
              //use binary search on target
              
             int st = 0 , end = n-1;  // reset every time 
              
              while(st <= end ){
                 
                 int mid = st + (end -st)/2;
                 
                 if(arr[mid] == target) 
                      return true;
                      
                      
                    else if(arr[mid] < target)
                     // move right side
                      st = mid +1;
                      
                      else end = mid -1;
              }
     }
      
      return false;
    }
};







// brute force O(n^2)


class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        
    int n = arr.size();
    
      for(int i=0; i<n-1; i++){
          for(int j=i+1; j<n; j++){
              if(arr[i] - arr[j] == x  || arr[j] -arr[i] == x)
              return true;
          }
      }
      
      return false;
    }
};
