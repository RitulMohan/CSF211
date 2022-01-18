#include <iostream>
#include <cstring>

using namespace std; 

int main()
{
      char s1[]="gfg"; 
     char s2[]={'a', 'b', 'c', 'd', '\0'}; 

     int res = strcmp(s1, s2); 
     if (res ==0)
     {
         cout<<"same"; 
     }
     if(res<0){
         cout<<"smaller"; 
     }
     else{
         cout<<"greater"; 
     }
}


//we basically compare the first element of the respective strings 
//if not first then whicher one has higer ascii value first