#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray( vector<int> &v)
{
    cout << "[ ";
    for (auto i : v)
        cout << i << " ";
    cout << "]" << endl;
}


bool divide(const vector<int> &v)
{
    int n = v.size();

    // i'm also interset to print both subArray 

    //    vector<int> subArray1(n);
    //    vector<int> subArray2(n);

    for (int i = 0; i < n - 1; i++)
    {
        int sum1 = 0, sum2 = 0;

        //   int idx = 0;
        // first partition sum
        for (int j = 0; j <= i; j++)
        {  

            sum1 += v[j];
            // subArray1[idx++] = v[j];
        }

    //    int idx2 =0;
        // second partition sum
        for (int j = i + 1; j < n; j++)
        {

            sum2 += v[j];
        //   subArray2[idx2++] = v[j];

        }

        // Check if both partition sum equal or not
        if (sum1 == sum2){
        //  subArray1.resize(idx);    // idx == i+1 here
        //  subArray2.resize(idx2);   // idx2 == n-i-1 here

        //   printArray(subArray1);
        //   printArray(subArray2);

          return 1;
        }
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the element in array: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (divide(v))
        cout << "Equal sum possible";
    else
        cout << "Equal sum not possible";
    return 0;
}