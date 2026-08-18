 #include<iostream>
 using namespace std;


   
 int isRectangle(int A, int B, int C, int D)
    {
        if ((A == B && C == D) || (A == C && B == D) || (A == D && B == C))
            return 1;
        else
            return 0;
    }
 


// Driver code
int main()
{
    int a, b, c, d;

    a = 2, b = 2, c = 2, d = 2;
    // a = 2, b = 4, c = 2, d = 4;
    // a = 2, b = 31, c = 3, d = 2;
    
    if (isRectangle(a, b, c, d))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}