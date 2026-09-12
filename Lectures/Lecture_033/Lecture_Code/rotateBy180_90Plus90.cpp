//Time Complexity : O(n^2) , S.C: O(1)
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        
         int n = mat.size();
         
         // approch 180 = 90 + 90 
         
         //====first 90 ====
         
         // revese each column 
         for(int i =0; i<n/2; i++){
             for(int j=0; j<n; j++)
               swap(mat[i][j] ,mat[n-i-1][j]);
         }
         
         // transpose 
         
         for(int i =0; i<n-1; i++){
             
            for(int j=i+1; j<n; j++)
                swap(mat[i][j] , mat[j][i]);
         }
         
         
         
         
           //====Second 90 ====
         
         // revese each column 
         for(int i =0; i<n/2; i++){
             for(int j=0; j<n; j++)
               swap(mat[i][j] ,mat[n-i-1][j]);
         }
         
         // transpose 
         
         for(int i =0; i<n-1; i++){
             
            for(int j=i+1; j<n; j++)
                swap(mat[i][j] , mat[j][i]);
         }
         
    }
};


















class Solution
{
public:
    void rotateMatrix(vector<vector<int>> &mat)
    {
        int n = mat.size();
        // ------------first 90 degree------------

        // first take transpose
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
                swap(mat[i][j], mat[j][i]);
        }

        // second reverse each row
        int s, e;
        for (int i = 0; i < n; i++)
        {
            s = 0, e = n - 1;
            while (s < e)
            {
                swap(mat[i][s], mat[i][e]);
                s++;
                e--;
            }
        }

        // ------------second 90 degree------------
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
                swap(mat[i][j], mat[j][i]);
        }

        // second reverse each row

        for (int i = 0; i < n; i++)
        {
            s = 0, e = n - 1;
            while (s < e)
            {
                swap(mat[i][s], mat[i][e]);
                s++;
                e--;
            }
        }
    }
};