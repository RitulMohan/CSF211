#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20 ; 
    bool res = (x>0 && x<100);
    cout << res << "\n";
    res = (x>0 || x>y);
    cout << res << "\n";
    res = !res;
    cout << res << "\n";
    return 0;
}

//we can use and in place of $$, or in place of ||, not in place of ! in C++ 
