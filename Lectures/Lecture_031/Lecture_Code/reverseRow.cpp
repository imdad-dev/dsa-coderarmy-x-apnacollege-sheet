#include <iostream>
#include <algorithm>
using namespace std;

void print2Darray(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void reverseRow(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

int main()
{
    int arr1[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    cout << "Array Before: \n";
    print2Darray(arr1, 4, 4);

    reverseRow(arr1, 4, 4);

    cout << "Array After: \n";
    print2Darray(arr1, 4, 4);
}







/* 
Reverse Order of Rows of a Matrix

Given a matrix of size n × m, reverse the order of its rows in-place. After the operation, the first row should become the last row, the second row should become the second last row, and so on.

Examples:

Input: mat[][] = [[1 2 3 4][5 6 7 8][9 10 11 12][13 14 15 16]]
Output: [[13 14 15 16][9 10 11 12][5 6 7 8][1 2 3 4]]
Explanation: After reversing the order of the rows, the first row becomes the last row, the second row becomes the second last row, and so on.
*/



// T.C : O(n) -+
    

class Solution {
  public:
    void interchangeRows(vector<vector<int>> &mat) {
        // code here
        
        int n = mat.size();
        
        for (int i = 0; i < n / 2; i++) {
            swap(mat[i], mat[n - 1 - i]);   // reverse row 1 <--> last row
    }
    }
};

//T.C : O(n^2)
// or 
void interchangeRows(vector<vector<int>> &mat) {
    int n = mat.size();        // rows
    int m = mat[0].size();     // columns

    for (int i = 0; i < n / 2; i++) {          // top/bottom row pointers
        for (int j = 0; j < m; j++) {          // go through each column
            swap(mat[i][j], mat[n - 1 - i][j]);
        }
    }
}