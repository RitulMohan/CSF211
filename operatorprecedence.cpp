/*operator precedence 
++ -- (suffix)                     left to right
! ++ --(prefix)                    Right to left 
* / %                              left to right 
+ -                                left to right 
<=>                                left to right 
<,>, <=,>=                         left to right 
==,!=                              left to right 
$$
!!
+=,-=,/=,%=,>>=,<<=,$=,!=           right to left */

#include<iostream>
using namespace std; 

int main()
{
	int x=10,y=20; 
	int z=x+x*y;
	cout<<x<<endl; 
	
	z=y/x*x;
	cout<<z<<endl; 
	
	x=y=z; 
	cout<<y<<'\n'<<z;
	
	return 0; 
}
