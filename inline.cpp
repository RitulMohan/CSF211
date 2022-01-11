#include<iostream>
using namespace std; 

inline int getmax(int x, int y)
{
    return(x>y)? x:y;
}
int main()
{
cout<<getmax(10,20);
return 0; 
}


//inline is just a suggestion to the compiler 
//modern compilers may make a function inline even without our use 
//using excess of inline may increase the binary file size 

