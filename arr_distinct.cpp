#include<iostream>
using namespace std;



bool isdist(int arr[], int n)
{
	int count=0; 
	bool isdist= true; 
	
	for (int i=0; i<n; i++)
	{
		isdist=true; 
		
		for(int j=i-1; j>=0; j--)
		{
			if arr[i]==arr[j]
			{
				isdist=false; 
				break; 	
			}
		}
		if (isdist==true)
		count++; 
	}
    return count; 
}
int main()
{
	cout<<"enter n: "; 
	int n; 
	cin>>n; 
	
	int arr[n]; 
	for(int i=0; i<n; i++)
	{
		cin>>arr[i]; 
	}
	cout<<count_distinct(arr, n)
	
return 0; 
}
