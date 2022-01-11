#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
    // Binary Operators
    {
        int x = 20, y = 10;
        cout << (x+y) << "\n"
             << (x-y) << "\n"
             << (x%y) << "\n"
             << (x*y) << "\n";
    }
    // Unary Operators
    {
        int x = 10;
        int y = x ++;
        int z = ++x;
        cout << x << "\n"
             << y << "\n"
             << z;
    }
    return 0;
}

//the sign of (a%b) is same as a
//10%-3=1
//-10%3=-1
//b=0 will give undefined behaviour 

//y=x++ means y=x and x=x+1
//z=++x means x=X+1 and z=x
