#include<iostream>
using namespace std;

int getmax(int x, int y); 

int main()
{
int a=10, b=20;
cout<<getmax(a,b);
return 0;
}

int getmax(int x, int y)
{
	if (x>y)
	return x; 
	
	else 
	return y;
}


//if we remove the definition of getmax we'll get *linker error*
//if we remove the (int x, int y) from the 4th line we'll get compiler error 
 

