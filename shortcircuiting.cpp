#include<iostream>
using namespace std; 
int main()
{
int x=5;
 bool res = (x>0 && x<100);
    // Short Circuiting
    res = (x>10)&&(x++);
    cout << res << " " << x << "\n";
    return 0; 
}
