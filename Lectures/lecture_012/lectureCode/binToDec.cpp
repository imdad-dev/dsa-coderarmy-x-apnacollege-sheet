#include<iostream>
using namespace std;

int main (){
    int num;
    cout<<"Enter a Binary Number:";
    cin>>num;

    int rem , ans=0, mul=1;

    while(num>0){
        
        // reminder or last digit 
        rem =num%10;

    // update number 
     num/=10;

     //ans 
   ans =ans + rem*mul;

     // increment 
   mul*=2;

    }

 cout<<"Decimal No : "<<ans;

return 0;

}