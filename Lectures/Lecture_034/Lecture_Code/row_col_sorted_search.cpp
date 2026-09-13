class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        
        int n = mat.size();
        int m = mat[0].size();
        
        int row =0 , col = m-1;
        
        while(row < n && col >= 0){
            
            if(mat[row][col] == x)
                  return 1;
                  
            else if (mat[row][col] < x)
                // moved moved down 
                row++;
                
            else 
                // moved left 
                col--;
        }
        
        return 0;
    }
};