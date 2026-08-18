#include <iostream>
using namespace std;

char convert(char ltr)
{

 /* 
    char ans small -'a' + 'A'  ;   
    return ans;
     */

      // small to capital and capital to small 
     if (ltr >= 'a' && ltr <='z' )   return  ltr -32;
    
     else if( ltr >= 'A' && ltr <='Z') return ltr + 32;

     else return 0;  // handle diff. way 
  


  /*  why 32? --> 97 -65 =32 , 2^5 ,

  letter 26 but gap 6 why need to desing to  left 6 place between small and capital letter ?

   ans is binary number. , write binary 65 and 97 . now think  , i hope got answer
  */
}

int main()
{
    char alphabet;
    cout << "Enter a  alphabet: ";
    cin >> alphabet;

    cout << "From : " << alphabet << " - To : " << convert(alphabet) << endl;

    return 0;
}