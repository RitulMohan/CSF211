//output of this program is compiler dependent (writing such code is not recommended)


#include <bits/stdc++.h>

using namespace std;

void fun(int x, int y, int z){
    
    
    cout << x << " " << y << " " << z;
}

int main() {

	int i = 2;
	
	fun(++i, ++i, ++i);
	
	return 0;
}

