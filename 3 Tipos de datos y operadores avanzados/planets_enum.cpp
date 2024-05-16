#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

enum DIST_FROM_SUN {
                    MERCURY = 57900000, 
                    VENUS   = 108200000,
                    EARTH   = 149600000,
                    MARS    = 227900000,
                    JUPITER = 778600000,
                    SATURN  = 1433500000,
                    URANUS  = 2872500000,
                    NEPTUNE = 4495100000 
                    };
int main()
{
    DIST_FROM_SUN planet=NEPTUNE;            


cout<<"The distance from the Sun and Mercury is: "<<planet<< " Km";

return  0;
}
