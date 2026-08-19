#include <iostream>
using namespace std;

int main()
{
    // WAYS OF DECLARATION ARRAY;

    // 1: Way 1
    int arr[5] = {1, 2, 3, 4, 5};

    // 2: Way 2
    //  int arr[] = {1,2,3,4,5};

    // 3: Way: 3
    // int arr[5] = {2,3} // other 3 element garbage value store

    // 4: Way: 4
    // int arr[5];
    // for(int i = 0; i<5; i++){
    //  cin>>arr[i];
    // }

    // 5: Way: 5
    // int arr[5] = {0}  // all 5 element fill with 0 , here exp. 2 not initilze all the place , only for 0 

    // printing array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}