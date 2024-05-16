#include <iostream> 
using namespace std;

int main()
{
    /*The real benefit of pointers is that they allow you 
    to indirectly access and modify the variable being pointed to
    for example we use ptr poiter to change the variable x 
     */
    int x=25;
    int *ptr =nullptr; //pointer  to an integer initialized with null value.

    ptr = &x;   //point the pointer to variable x, now ptr is pointing to memory address of x.

    cout<<"The address of x is "<<ptr <<endl;  //prints the memory address of variable 'x'
    cout<<"The address of x is "<<&x <<endl;  //prints the memory address of variable 'x'

    cout<<"The size of x is "<<sizeof(x)<< " bytes "<<endl;
    
    *ptr=100;

    cout<<"The value in x is " << x<<endl;
    cout<<"The value in x is " << *ptr <<endl;

    return 0;
}
