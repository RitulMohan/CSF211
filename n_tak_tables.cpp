#include<iostream>
using namespace std;

int main()
{
int n; 
cout<<"enter n: "; 
cin>>n; 

for(int x=1;x<=n;x++)
{
	for(int i;i<=10; i++)
	{
	cout<<(x*i)<<" "; 
    } 
cout<<"\n";
}

return 0;
}


