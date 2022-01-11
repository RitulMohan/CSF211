/*default precision value is 6
no trailing zeroes
when value before decimal point does not fit in 6 digits, 
power format is used, for example 12345678.3 is printed as 1.234567e+06*/

#include<iostream>
using namespace std; 

int main()
{
	double x=1.2300;
	cout<<x<<endl;
	double y=1567.56732;
	cout<<y<<endl;
	double z=1234567.45;
	cout<<z<<endl;
	double w=123e+2;
	cout<<w;
	
	return 0;
}
