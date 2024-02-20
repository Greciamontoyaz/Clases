#include <iostream> 
using namespace std;

int main()
{
    int x=25;

    cout<<"The address of x is "<<&x<<endl;  //prints the memory address of variable 'x'
    cout<<"The size of x is "<<sizeof(x)<< " bytes "<<endl;
    cout<<"The value in x is " << x<<endl;
    return 0;
}
