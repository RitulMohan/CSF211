#include<iostream>
using namespace std;


int first_digit(int x)
{
while (x>10)
 {
   x=x/10;		
 }
 return x; 
}


int main()
{    int x;
    cout<<"enter the number";
	cin>>x;
	
cout<<first_digit(x);
return 0;
}


