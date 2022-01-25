#include <iostream>
using namespace std; 

int main()
{
    int arr[3][2]={{1,2}, {2,3}, {3,4}};  //3 rows 2 columns 

    for(int i=0; i<3; i++)
    {
        for (int j=0; j<2; j++)
        {
            cout<<arr[i][j]<<" ";  
        }
    }

return 0; 

}