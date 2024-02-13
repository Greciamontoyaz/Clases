#include <iostream>
//lets create a player structure
//name, salary, height, weight, scoring average, free-throw percentage
struct coordinates // structure declaration
{
float x;
float y;
}  ;
////////////////////////////////////////////////////////////////////////////////////////
/// 
int main()
{
using namespace std;
coordinates xy={10,9}; 

cout<<xy.x<<endl;

return 0; 
}