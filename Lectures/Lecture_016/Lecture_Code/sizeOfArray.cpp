#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Total Size of array: " << sizeof(arr) << " ";  // 20bytes

    cout << " Size of single Element: " << sizeof(arr[0]) << " ";  // 4bytes



    cout << " No. of Elements in an array: " << sizeof(arr) / sizeof(arr[0]) << " ";  // 5

    return 0;
}