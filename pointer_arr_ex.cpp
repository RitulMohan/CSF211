#include <iostream>
using namespace std; 

void fun(int arr[])
{
    int n= sizeof(arr)/sizeof(arr[0]) ; 
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl; 
    }
}
                                            
int main()
{
    int arr[]={10, 20, 30, 40}
    int n=sizeof (arr)/sizeof (arr[0]); 
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "; 
        cout<<"\n"; 
        fun(arr); 
        
        return 0; 
    }
}


//the size of pointer is 8, while size of int is 4 hence the output is 
//10 20 30 40
//10 20