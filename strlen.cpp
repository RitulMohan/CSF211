#include <iostream>
#include <cstring>
using namespace std; 

int main()

{
     char s1[]="gfg"; 
     char s2[]={'a', 'b', 'c', 'd', '\0'}; 
// c style strings are char arrays ending with a /0 

     cout<<strlen(s1)<<endl; 
     cout<<strlen(s2); 

}