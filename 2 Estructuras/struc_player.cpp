// structur.cpp -- a simple structure
#include <iostream>
//lets create a player structure
//name, salary, height, weight, scoring average, free-throw percentage
struct player // structure declaration
{
char name[20];
float salary;
double height;
int weight;
float avg_scoring;
float  free_throw_prctg;
};
////////////////////////////////////////////////////////////////////////////////////////
/// 
int main()
{
using namespace std;
player player_1 =
{
    "Glorious Gloria", // name value
    100.12, // salary value
    1.85, // height
    75, //weight
    10, //scorring average
    .93 //free-throw percentage
}; 
/////also you can change only one member of the structure
player_1.salary=200;

cout << "The name of the player " << player_1.name<<endl;
cout << "The player salary $";
cout << player_1.salary << "!\n";
return 0; 
}