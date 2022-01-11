#include<iostream>
using namespace std;

int main()
{
int n ; 
cout<<"enter a number"; 
cin>>n; 

for(int x=2; x<=n; x++)
{
	if(n%x==0)
	{
		cout<<"the smallest divisor is: "<<x; 
		break; 
	}
}
return 0;
}


