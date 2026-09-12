// time complexity : O(n^2) , s.c: O(2)
// brute force Approch

void rotateMatrix(vector<vector<int>> & mat){

    int n = mat.size();
    vector<vector<int>> ans(n , vector<int>(n));


    for(int i=0; i<n; i++){

        for(int j = 0; j<n; j++){
            ans[j][n-1-i] = mat[i][j];
        }
    }
}










// time complexity : O(n^2) , s.c: O(1)

 class Solution
 {
 public:
     void rotateMatrix(vector<vector<int>> &mat)
     {
         // code here
         int n = mat.size();
         
         // reverse each row 
         for(int i =0; i<n; i++){
             for(int j=0; j<n/2; j++)
                swap(mat[i][j] , mat[i][n-j-1]);
         }

         // taking transpose
         for (int i = 0; i < n - 1; i++)
         {
             for (int j = i + 1; j < n; j++)
                 swap(mat[i][j], mat[j][i]);
         }

          
     }
 };


 // OR
 
class Solution
{
public:
    void rotateMatrix(vector<vector<int>> &mat)
    {
        // code here
        int n = mat.size();

        // first taking transpose
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
                swap(mat[i][j], mat[j][i]);
        }

        // second column reverse
        int s, e;
        for (int j = 0; j < n; j++)
        {
            s = 0, e = n - 1;
            while (s < e)
            {
                swap(mat[s][j], mat[e][j]);
                s++;
                e--;
            }
        }
    }
};