// T.C : O(n^2)  S.c : (1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();

        // reverse each columnn
        for(int i =0; i<n/2; i++){
            
            for(int j=0; j<n; j++)
              swap(matrix[i][j] , matrix[n-1-i][j]);
        }

        // transpose of matrix
        for(int i=0; i<n-1; i++){
            for(int j = i+1; j<n; j++)
            swap(matrix[i][j] , matrix[j][i]);
        }
    }
};