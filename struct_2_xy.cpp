#include <iostream>
#include <cmath>
using namespace std;

struct coordinates // structure declaration
{
float x;
float y;
}  ;

float distance(coordinates a, coordinates b);
void distance_public(void);
float dist_2=0;
coordinates a={0,0}, b={4,3}; 

////////////////////////////////////////////////////////////////////////////////////////
/// 
int main()
{

coordinates x1y1={10,9}, x2y2={1,-9}; 
//coordinates ; 
float dist;
cout<<"Coordinates x1:"<<x1y1.x<<endl;
cout<<"Coordinates y1:"<<x1y1.y<<endl;

cout<<"Coordinates x2:"<<x2y2.x<<endl;
cout<<"Coordinates y2:"<<x2y2.y<<endl;
  
dist=distance(x1y1,x2y2);


distance_public();
  
cout<<"The distance is : "<<dist<<endl;  
cout<<"The distance  2 is : "<<dist_2<<endl;  
return 0; 
}
/////////////////////////////////////////////////
// dist = sqrt( (x2-x1)^2 + (y2-y1)^2)
//pow(number, power) number^{power}
float distance(coordinates a, coordinates b){
  return sqrt( pow(a.x-b.x,2) + pow(a.y-b.y,2) );
}

//////////////////////////////////////////////////
void distance_public(void){
   dist_2=sqrt( pow(a.x-b.x,2) + pow(a.y-b.y,2) );
}
//////////////////
/////Example: variable publica: dist_2
