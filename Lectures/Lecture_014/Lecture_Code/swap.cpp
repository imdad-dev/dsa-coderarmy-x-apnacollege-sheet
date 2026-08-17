#include <iostream>
using namespace std;

// swap alrady build in function in c++, you can call directly without write defination of function 

void swap(int &a, int &b)
{ // pass by reference
    int c;
    c = a;
    a = b;
    b = c;
}

void swapWithoutTemp(int &a, int &b)
{ // swap without 3rd variable
    a=a+b;
    b=a-b;
    a=a-b;
}

 

void swap(float &c, float &d)
{ // function overloading
    float r = c;
    c = d;
    d = r;
}

int main()
{
    int a, b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;

    cout << "int type: " << endl;
    swap(a , b);
    cout << a << " " << b << endl<<endl;

    cout<<"Swap without third variable"<<endl;

    cout<<"Befor swapping a ="<<a<<"\nBefore swapping b ="<<b<<endl;
    
    swapWithoutTemp(a , b);

    cout<<"After swapping a ="<<a<<"\nAfter swapping b ="<<b<<endl<<endl;



    cout << "float type: " << endl;
    float f1 = 4.6, f2 = 6.5;
    swap(f1, f2);
    cout << f1 << " " << f2 << endl;

    return 0;
}