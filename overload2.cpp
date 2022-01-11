#include<iostream>
using namespace std;

void print(string s)
{
	cout<<s<<endl; 
}
void print(int x)
{
	cout<<x<<endl;
}
void print(char c)
{
	cout<<c<<endl;
}
int main()
{
print ('a');
print (10); 
print("GFG"); 

return 0;
}

//if exact match is not found then overloading does automatic update is made to the suitable data type 
// for example if we remove void char, we'll get ASCII value of a i.e. 97
