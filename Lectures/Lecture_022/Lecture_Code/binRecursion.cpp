#include<iostream>
using namespace std;

 BinarySearchRec(int arr[] , int target , int str , int end){

    if(str > end ) return -1;

    int mid = str + (end -str)/2;
    
     if(arr[mid] == target) return mid;

     else if (arr[mid] < target) return BinarySearchRec(arr , target ,mid +1 , end );  // right 

     else return BinarySearchRec(arr , target , str , mid -1);  // left 



 }

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key: ";
    cin >> key;

    cout << BinarySearchRec(arr,key , 0 , n-1);

    return 0;
}