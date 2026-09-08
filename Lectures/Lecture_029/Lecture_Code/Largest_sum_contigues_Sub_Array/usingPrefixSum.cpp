
//time complexcity : O(n^2) 
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int maxi = INT_MIN;
        
        for(int i=0; i<n; i++){
            
            int prefix = 0;
            
            for(int j=i; j<n; j++){
                
                prefix += arr[j];
                maxi = max(maxi , prefix);
            }
        }
        
        return maxi;
    }
};