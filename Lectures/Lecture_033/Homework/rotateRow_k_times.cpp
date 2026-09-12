//T.C : O(m * N) , S.C = O(1)


class Solution {
  public:
  
   void reverse(vector<int> & row , int st , int end){
       
       while(st < end ){
            
            swap(row[st] , row[end]);
            st++ , end --;
       }
   }
  
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int m = mat.size();  // row 
        int n = mat[0].size();
        
        k = k%n;  
        
        for(int i=0; i<m; i++){
            
            //reverse first kth element
             reverse(mat[i] , 0 , k-1);
            
            // reverse remaining k-n th element 
            reverse(mat[i] , k , n-1);
            
            // reverse whole element or row 
            reverse(mat[i] , 0 , n-1);
        }
        
        return mat;
    }
};







class Solution
{
public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat)
    {
        // code here
        int rows = mat.size();
        int cols = mat[0].size();

        vector<vector<int>> ans(rows, vector<int>(cols));

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                ans[i][j] = mat[i][(k + j) % cols];
        }

        return ans;
    }
};