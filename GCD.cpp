#include<iostream> 
using namespace std; 

int main()
{
    int n1, n2; 
    std::cout<<"enter the numbers: ";
    std::cin >> n1>>n2;
    
    int min;
    if(n1>n2)
    {
        min=n2;
    }
    
    else
    {
        min=n1;
    }
    
    int GCD=1;
    
    for(int i=1; i<=min; i++)
    {
        if(n1%i==0 and n2%i==0)
        GCD=i;
    }
    cout<<GCD; 
}
