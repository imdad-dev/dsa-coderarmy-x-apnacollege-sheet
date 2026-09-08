//  [Expected Approach or expected T.C] - Using Segment Tree - O(q * log n) Time and O(n) Space
 

// TLE runtime error , timecomplexity : O(q*n)
class Solution {
  public:
    vector<int> maxPrefixSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        
        // size of queries 
        int q = queries.size();
        
        int maxi , prefix;
        
        vector<int> ans;
        
        for(int i =0; i<q; i++){
            
            int left = queries[i][0] ,  right =queries[i][1];
            
            maxi = arr[left] , prefix = 0;
            
            //  for finding maxi 
            
            for(int j=left; j<=right; j++){
    
                prefix += arr[j];
                 
                 maxi = max(maxi , prefix);
        }
        
        ans.push_back(maxi);
    }
    return ans;
    
    }
};