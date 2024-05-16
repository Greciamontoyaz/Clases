#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY,THURSDAY,FRIDAY};
//  MONDAY=0,TUESDAY=1,WEDNESDAY=2, THURSDAY=3, FRIDAY=4

int main()
{
    const int NUM_DAYS=5;
    double sales[NUM_DAYS]; //array to hold the amount of money sold 
    double total = 0.0;     //variable to store the sum of all amounts
    Day workDay;            //enumeration variable for days of the

// get the sales of the day

for (workDay=MONDAY; workDay<=FRIDAY; 
                     workDay= static_cast<Day>(workDay+1))
{
    cout<<"Enter the sales for day " 
        <<workDay+1 << " : $";
    cin>>sales[workDay];
}


for (workDay=MONDAY; workDay<=FRIDAY; 
                     workDay= static_cast<Day>(workDay+1))
{
    total+=sales[workDay];   //add each days sale to the total
}
cout << fixed <<showpoint << setprecision(2);
cout<<"The whole week sales are: $"<<total<<endl;
return  0;
}
