#include <bits/stdc++.h>
#include <vector>
using namespace std; 

int main()
{
vector <int> v {10, 5, 20, 15}
v.pop_back(); 

v.front()=100; 
v.insert(v.begin(), 25); 
v.insert(v.begin()+2, 30); 
v.insert(v.begin()+1, 2, 35); 

vector <int>v2; 
v2.insert(v2.begin(), v.begin(), v.begin()+2 ); 

for(int x: v)
{
    cout<<x<<" "; 
}
cout<<v.front(); 
cout<<v.back(); 

return 0; 
}