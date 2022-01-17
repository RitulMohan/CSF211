#include <iostream>
using namespace std; 

int main()
{
    int arr[]={10, 20, 30, 40}; 
    int *ptr= arr; 

    cout<< sizeof(arr)<<endl; 
    cout<<sizeof(ptr)<<endl; 
    cout<<*(arr+2)<<endl; 
    cout<<ptr[2]<<endl; 

    return 0; 

}