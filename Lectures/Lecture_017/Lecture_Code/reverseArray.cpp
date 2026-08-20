#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};

    int str =0 , end=6-1;

while(str < end){

     swap(arr[str] , arr[end]);
     str++;
     end--;
}

    // printing array
    cout << "Reversed Array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}


// swap start and end index while str < end , = no need to swap 