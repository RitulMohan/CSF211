#include <iostream>
using namespace std; 

union test
{
    int x; 
    char y; 
    double z; 
    int arr[4]; 
    /* data */
};

int main()
{
cout<<sizeof(test); 
    return 0; 
} 