#include<iostream>
using namespace std; 

int main()
{
	int num; 
	cout<<"enter a number";
	cin>>num; 
	
	if (num>0)
	cout<<"the number entered is positive &"; 
	else
	cout<<"the number entered is negative &"; 
	
	if(num%2==0)
	cout<<" even.";
	
	else
	cout<<" odd.";
	
	return 0;
}
