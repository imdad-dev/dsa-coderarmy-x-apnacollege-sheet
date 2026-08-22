#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    // taking input
    cout<<"Enter the element in an array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

   
        //selection sort logic

        for(int i=0; i<n-1; i++){

            int idx =i;

            for(int j=i+1; j<n; j++){
                
                // find max for descending order 
                if(arr[j] > arr[idx])
                     idx=j;
            }

            swap(arr[i] , arr[idx]);
        }

    // print array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

/*  
 Time complexity : O(n^2)
 space complexity(auxilary) : O(1)
 */
