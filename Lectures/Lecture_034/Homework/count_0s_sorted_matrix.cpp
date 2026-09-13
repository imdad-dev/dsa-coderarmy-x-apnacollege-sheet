//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>>& mat) {
        // code here
        int n = mat.size(); // sqaur matrix 
        
        int count =0;
        int i =0 , j = n-1;
        
        while( i<n && j>= 0){
            
            if(mat[i][j]){
                // if 1 appear 
                j--;  // 
            }
            
            else { // 0 appear 
                
                count += j+1;
                i++;
            }
        }
        
        return count;
    }
};