#include <iostream>
using namespace std;

struct student
{
    int roll_number; 
    string name; 
    string address; 
};

int main()
{
    student s={832, "Ritul", "jaipur"}; 
    cout<<s.roll_number<<endl; 
    cout<<s.name<<endl; 
    cout<<s.address<<endl; 


return 0; 
}
