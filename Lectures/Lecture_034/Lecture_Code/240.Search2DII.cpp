// T.C = O( n+m )

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int n = matrix.size(); 
     int m = matrix[0].size(); 
        
    // start with top-right corner
      int row =0 , col = m-1;

      while( row < n && col >= 0){

      if(matrix[row][col] == target)
            return 1;

        else if (matrix[row][col] < target)
            // moved down
            row++;

        else 
           // moved left 
           col--;        

      }
     
      return 0;

    }
};









// Time complexcity : O(nlogm)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n = matrix.size(); // row 
        int m = matrix[0].size(); // col 

      for(int i =0; i<n; i++){

            if(matrix[i][0] <= target && target <= matrix[i][m-1]){

                // binary search col wise 
                int st = 0 , end = m-1;

                while(st <= end){
                    int mid = st + (end - st)/2;

                    if(matrix[i][mid] == target)
                         return 1;

                    else if(matrix[i][mid] < target)
                        // move left side 
                        st = mid +1;

                      else 
                         // move right side 
                         end = mid -1;    
                }
            }
        }
        return 0;

    }
};