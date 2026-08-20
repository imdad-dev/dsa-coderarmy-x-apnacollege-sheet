#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

   int arr[1000];

   arr[0]= 0 , arr[1]=1;

   for(int i=2; i<n; i++)
     arr[i] = arr[i-1] + arr[i-2];
 
cout<<endl<<n<<" element of Fibonacci series = " <<arr[n-1]<<endl;

// print fibo series using array 
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

//     int a =0 , b=1 , c;


// first element print 0 , 1 
//     cout<<n<<" Fibonacci series is :  "<<a<<" "<<b<<" ";

//     for(int i=2; i<n; i++){
        
//         c=a+b;
//         cout<<c<<" ";
//         a=b; 
//         b=c;

//     }
//   cout<<endl<<n<<" element of Fibonacci series = " <<c;
     
   return 0;
}