#include <bits/stdc++.h> 
using namespace std; 

int main()
{

string s1="ritul"; 
string s2="itrul"; 

int l1=s1.length(); 
int l2=s2.length(); 

if(l1!=l2)
{
    cout<<"the given strings are not anagrams"; 
}

sort(s1.begin(), s1.end()); 
sort(s2.begin(), s2.end()); 

for (int i=0; i<s1.length(); i++)
{
    if (s1[i]!=s2[i])
    {
         cout<<"not anagrams"; 
    }
}

cout<<"anagrams"; 

/*else 
{
cout<<"the taken strings are anagrams of each other"; 
}
return 0;
*/
return 0; 
}

//to be anagrams we check
// if length of both strings is same 
//and if the count of each char is same in both strings 
