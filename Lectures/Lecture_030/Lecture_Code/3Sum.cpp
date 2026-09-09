// time complexity : O(n^2)
// space complexity : O(1)


class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size();
        
        // sort the array
         sort(arr.begin() , arr.end());   // O(nlogn)
         
         for(int i = 0; i<n-2; i++){  O(n)
             
             int ans = target -arr[i];
             
             // two pointer : O(n)
             int st = i+1 , end = n-1;
             
             while(st < end ){
                 
                 if(arr[st] + arr[end] == ans)
                         return 1;
                
                else if(arr[st] + arr[end] > ans)
                         end --;
                         
                else 
                    st++;
             }
         }
        
        return 0;
    }
    
};






//binary search
// in vector use binary_search( )
//time complexity : O(n^2.logn)

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size();
         sort(arr.begin() , arr.end());
        
       for(int i =0; i<n-2; i++){
           
           for(int j= i+1; j<n; j++){
               
               int find = target - arr[i] -arr[j];
               
               // binary search 
               
               //  Pass iterators defining the [start, end) range
               // arr.begin() + j + 1 points to the start index
               // arr.end() points to the exclusive end of the vector
               if(binary_search(arr.begin() + j +1 , arr.end() , find))
                       return 1;
           }
       }
        
        return 0;
    }
    
};






#include <iostream>
#include <algorithm>
using namespace std;
bool isTripletSum(int arr[], int n, int x)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int find = x - arr[j] - arr[i];
            if (binary_search(arr + j + 1, arr + n, find))
                return 1;
        }
    }

    return 0;
}
int main()
{
    // we need sorted array
    int arr[] = {1, 4 , 6, 8, 10 , 45};
    int n = 6, x = 13;

    cout << (isTripletSum(arr, n, x) ? "Yes" : "No");

    return 0;
}