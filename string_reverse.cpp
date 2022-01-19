#include <iostream>
using namespace std; 

int main()
{
    cout<<"enter the string: "; 
  string s; 
  cin>>s; 

  string n=" "; 
int l=s.length()-1; 

while(l>=0)
{
    n=n+s[l]; 
    l--; 
}
 
cout<<n; 
return 0; 
}