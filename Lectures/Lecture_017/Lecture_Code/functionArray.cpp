#include <iostream>
using namespace std;

void fun(int a[], int n)
{
    cout << sizeof(a) << endl; // 4 :4 bytes bez store address or pointer , system : 4GB 32 bit process :  4 byte , 8GB : 8byte
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int arr[5] = {3, 2, 1, 7, 5};
    cout << sizeof(arr) << endl;  // 20 = 5*4
    fun(arr, 5);

    return 0;
}