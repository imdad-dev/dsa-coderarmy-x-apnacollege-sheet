#include <iostream>
using namespace std;

int elementIdx (int arr[]  , int n){
        int keyElem;
    cout << "Which element do you want to find? ";
    cin >> keyElem;

       
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == keyElem)
        {
            index = i;
         
          return i;  // index
        }
    }

    return -1;  // not present
}

int main()
{
    int n; // size of an array
    cout << "Enter the size of elements: ";
    cin >> n;

    int arr[1000];

    // input the elements
    for (int i = 0; i < n; i++)
    {
        cout << "Element at position " << i + 1 << " : ";
        cin >> arr[i];
    }


    cout<<elementIdx(arr, n);

  return 0;
}