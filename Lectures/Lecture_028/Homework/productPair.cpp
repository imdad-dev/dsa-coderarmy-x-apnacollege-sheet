class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        
        int n = arr.size();
        
        sort(arr.begin() , arr.end());
        
        int st = 0 , end = n-1;
        long long product;
        
        while( st < end){
            
            product = (long long)arr[st] * arr[end];
            
            if(product == target) {
                
                return 1;
            }
            
            // if value less than required value
            else if(product < target)
                // increase st 
                st++;
              
              // if value greater than required value  
            else 
                end--;
        }
        
        return 0;
    }
};