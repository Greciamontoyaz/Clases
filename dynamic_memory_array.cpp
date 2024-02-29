/*
This program totals and averages the sales amounts for any 
number of days. The amounts are stored in a dynamically 
allocated array
*/

#include <iostream>
#include <iomanip>//includes money format data (and also time)
using namespace std;

int main(){
    double *sales =nullptr,     //to dinamically allocate an array
            total=0.0,          //accumulator 
            average;            //to hold the average sales
    int     numDays,            //to hold the number of days sales    
            count;              //counter variable

    //get the number of days of sales.
    cout << "How many days of sales amounts do you want to enter? : ";
    cin >> numDays;

    //dynamically allocate an array large enough to hold 
    //that many days of sales amounts 
    sales = new double[numDays];
    
    //get the sales amounts for each day
    cout << "Enter the sales amounts below :\n";
    for (count= 0; count<numDays ; count++){
        cout << "Day " << (count +1) << " : ";
        cin >> sales[count] ;
    }

    //calculate the total sales 
    for (count= 0; count<numDays ; count++){
        total +=sales[count];
    } 

    //calculate the average sales per day
    average = total /numDays;

    //Display the results 
    cout << fixed <<showpoint << setprecision(2);
    cout << "\nThe total amount of all sales is $"<<total<<".\n";
    cout << "The average daily sales are $"<<average<<".\n";

    //free the dynamically allocated memory
    delete [] sales;
    sales = nullptr;

    return 0;
}

