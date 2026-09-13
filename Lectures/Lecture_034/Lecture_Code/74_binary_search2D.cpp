// T.C = O(log(m*n))

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size(); // row 
        int m = matrix[0].size(); // col 
         
         int st =0 , end = n * m -1 ,mid , row_idx , col_idx;

         while(st <= end){

            mid = st + (end -st)/2;
            row_idx = mid/m;
            col_idx = mid % m;

            if(matrix[row_idx][col_idx] == target)
                     return true;
             else if(matrix[row_idx][col_idx] < target)
                      st = mid + 1;
                else 
                    end = mid -1;              
            
         }
 
        return 0;
    }
};



//T.c = O(n*long(m))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size(); // row 
        int m = matrix[0].size(); // col 

        // check row wise target may present or not 
        // then use binary search col wise 

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