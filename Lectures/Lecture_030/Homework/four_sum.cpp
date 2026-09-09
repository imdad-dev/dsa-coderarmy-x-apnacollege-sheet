// expexceted :O(n²) avg	O(n²)  -> using Hashmap of pair-sums	

// time complexity : O(n^3)

class Solution {
  public:
    bool fourSum(vector<int>& arr, int x) {
        // code here
        
        // approch : 4sum -> 3 sum -> 2sum 

        int n = arr.size();
        
        // sort the array 
        sort(arr.begin() , arr.end());
        
        
        // 4 sum 
        
        for(int i =0; i<n-3; i++){
            
            // 3sum 
            for(int j=i+1; j<n-2; j++){
                // 2 sum 
                
                int ans = x -arr[i] -arr[j];
                
                int st = j+1 , end = n-1;
                
                while (st < end) {
                    
                    if(arr[st] + arr[end] == ans )
                           return 1;
                           
                   else if(arr[st] + arr[end] > ans)
                           end--;
                           
                     else 
                         st++;
                }
            }
        }
        
        return 0;
    }
};