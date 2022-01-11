//concept: local functions which are not static are executed every time we call a function 
//static local variables are created only once 
	
#include <bits/stdc++.h>
using namespace std;

void fun(){
    
    static int x = 1;
    
    int y = 1;
    
    x++;
    y++;
    
    cout << x << " " << y << endl;
}

int main() {

	fun();
	fun();
	fun();
	
	return 0;
}

