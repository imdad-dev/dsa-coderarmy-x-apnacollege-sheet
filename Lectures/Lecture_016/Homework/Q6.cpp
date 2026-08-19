#include <iostream>
#include <climits>
using namespace std;

// it can be optimized better figure out after a while
int main()
{
    int arr[7] = {2, 9, 4, 64, 44, 22, 1};
    int n = 7; // size of array

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    int thirdSmallest = INT_MAX;

    // handle  all the cases duplicate , less than 3 all cases 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = arr[i];
        }
        else if (arr[i] < thirdSmallest && arr[i] != secondSmallest && arr[i] != smallest)
        {
            thirdSmallest = arr[i];
        }
    }

if (thirdSmallest == INT_MAX)
    cout << "Third smallest does not exist (fewer than 3 distinct elements)" << endl;
else
    cout << "Third Smallest: " << thirdSmallest << endl;

    return 0;
}