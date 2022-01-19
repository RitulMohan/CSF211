#include <iostream>
using namespace std; 

int main()
{
    cout<<"enter string"; 
    string s;
    cin>>s; 
int end=s.length()-1; 
int start=0; 

while (start<end)
{
 if (s[start]!=s[end])
 {
     cout<<"no, the given word is not a palindrome"; 
 }
 else 
 {
     start++; 
     end--; 
 }
}

cout<<"Yes, the given word is a palindrome";  

return 0; 
}