#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0]<<endl;

    cout << arr[7]; // no warning in my system , print garbage value 

    return 0;
}