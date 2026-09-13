//T.c = O(n+m)

class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        int rows = arr.size(), cols = arr[0].size();

        int index = -1;

        int i = 0, j = cols - 1;

        while (i < rows && j >= 0)
        {
            if (arr[i][j]) // 1 appears move to left and store that row
            {
                j--;
                index = i;
            }
            else // 0 appears then move down
                i++;
        }
        return index;
    }
};










//T.C = O ( n * m )
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int countOne = 0, countMax = 0, idx = -1;
        for (int i = 0; i < n; i++) {
            countOne = 0;
            for (int j = 0; j < m; j++)
                if (arr[i][j] == 1) countOne++;
            if (countOne > countMax) {
                idx = i;
                countMax = countOne;
            }
        }
        return idx;
    }
};

int main() {
   
    vector<vector<int>> arr = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
    Solution sol;
    cout << sol.rowWithMax1s(arr) << endl;  // should print -1
    return 0;
}