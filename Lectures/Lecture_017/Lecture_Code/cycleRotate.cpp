void rotate(int arr[], int n)
{
    int last = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[0] = last;
}



/* 

Approch 1 : bad approach O(n^2)

1.copy array o to n-2 elment in i+1 columnt 
2. n-1 th element to store break loop  , set new copy 0th element 


Good Approch : No copy , work/update in same array  O(n)

 1.last element set temp variable 
 2.start loop backward direction n-2 to 0 
 3.to store element orignal index se ek index zyada me 
 4.first index assign with first index


 https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

*/