#include<iostream>
using namespace std;



class Solution {
public:

/*
1.trailing zeroes deponds on how many 5 appear in this no. bex 2*5= 10
*/
 

 int trailingZeroes(int n) {

      int noOfZeroes =0;

      while(n>=5){

        noOfZeroes += n/5;
        n /= 5;

      }  
   return noOfZeroes;
    }
};



//integer overflow occur here 
/*  
int fact(int n ){
   int fact =1;
   for(int i=1; i<=n; i++){
    fact *=i;
   }
   cout<<n<<"! = "<<fact;
   return fact;
}

 int trailingZeros(int n){
    int noOfZeros =0;

    while(n){
        int rem = n %10;

        if(rem !=0){ 
            break;
        }
       n/=10;
        noOfZeros++;
    }

    return noOfZeros;
 }  

int main (){
    
    int n ;
    cout<<"Enter a any number : ";
    cin>>n;

    int num =fact(n);

    cout<<endl<<"No. of Trailing Zeros is ="<<trailingZeros(num);
}

