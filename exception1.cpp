#include <iostream>
using namespace std; 

int main()
{
    int x=5,y=0; 

    

    try
    {
        if (y==0)
        throw 0;
        cout<<"result is: "<<x/y;  
    }

    catch (int x)
    {
        cout<<" error ! divisor is zero"; 
    }


    return 0; 
}