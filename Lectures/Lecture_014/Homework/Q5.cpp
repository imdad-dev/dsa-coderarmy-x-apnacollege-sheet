#include <iostream>
using namespace std;

string print(int n)
{
   
       return  "Hello  Coder army " ;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    cout<<print(n)<<endl;
    

    return 0;
}