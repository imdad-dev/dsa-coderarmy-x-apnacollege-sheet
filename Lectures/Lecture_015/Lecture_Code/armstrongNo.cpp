#include<iostream>
#include<cmath>
using namespace std;


/*
 1. count digit 
 2. find last number/ rem
 3.add with power of total digit like pow (rem , digit)
 4. remove last digit n/10
 5. break n <0 , n=0
*/

int countDigit (int n ){
     
    int count =0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

bool isArmstrong (int n  , int totalDigit){

  
    int originalNum =n , ans =0 , rem;

    while(n){

        rem = n%10;

        // bug : without round , 153 return a false ( final sum =152)

        /*pow function internaly exp(n * logn) , that's why give tiny floating point error pow(5 , 3)= 124.999983 which is store 124 
        
        fix: 
        1.using round()
        2. write you own power function (int base , int exp)
        */


        ans += round(pow(rem , totalDigit));
        n /=10;
    }

   cout<<"Original num = "<<originalNum <<",  final Sum = "<<ans<<endl;
    return originalNum == ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int totalDigit = countDigit(n);

    if (isArmstrong(n, totalDigit))
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}