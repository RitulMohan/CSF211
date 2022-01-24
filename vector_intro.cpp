#include <iostream>
#include <vector>
using namespace std; 


//we are in most cases, wasting memory space  while using array v

/*
advantages of vectors over arrays: 
-dynamic size
-better library of functions 
-easy to know size int n=v.size()
-can be returned from a function 
-can be default initialised with default values
-can be copied to other 
*/

int main()
{
vector <int>v; 
v.push_back(10); 
v.push_back(5); 
v.push_back(20); 

for (int i=0; i<v.size();i++)
{
    cout<<v[i]<<" "; 
}

return 0; 

}

//v.at(i): traverse through vector 
//plus point: also does array index out of bound checking