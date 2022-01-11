#include<iostream>
using namespace std; 

int main()
{
	int num;
	cout<<"enter your number: ";
	cin>>num;
	
	int dgt=num%10;
	if (num>0)
	 cout<<dgt;
	
	else
	 cout<<dgt+10;
	
	return 0;
}
