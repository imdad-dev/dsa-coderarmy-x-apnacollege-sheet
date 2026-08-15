#include<iostream>
using namespace std;

int main (){

    int num;

     cout<<"Enter a number :";
     cin>>num;

     int rem , ans=0 , mul =1;
     int n =num;

      while(num>0){

        //reminder
          rem =num %2;
          // rem =num&1;

        // qoutient 
           num/=2;
        //  num =num>>1;

        // ans
        ans += rem *mul;
     //  ans =ans*10 +rem;  fail every power of 2 

        // increment mul
        mul*=10;

      };


      cout<<n<<" binary form is : " <<ans ;
}