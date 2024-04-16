/*
This program totals and averages the sales amounts for any 
number of days. The amounts are stored in a dynamically 
allocated array
*/

#include <iostream>
#include <iomanip>//includes money format data (and also time)
#include <algorithm>
#include <cmath>
using namespace std;

double findMedian(double* sales, int numDays);
int findMode(double* sales, int numDays);


int main(){
    double *sales =nullptr,     //to dinamically allocate an array
            total=0.0,          //accumulator 
            average,            //to hold the average sales
            median;
    int     numDays,            //to hold the number of days sales    
            mode,
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


    median = findMedian(sales, numDays) ;
    cout<<"The median is: "<< median<<endl; 

    mode = findMode(sales, numDays);
    cout<<"The mode is: "<< mode<<endl; 
    //free the dynamically allocated memory
    delete [] sales;
    sales = nullptr;

    return 0;
}



double findMedian(double* sales, int numDays) {
  // Sort the sales data
  sort(sales, sales + numDays);

  // Find the median
  double median;
  if (numDays % 2 == 0) {
    // Even number of days - average of middle two values
    median = (sales[(numDays / 2) - 1] + sales[numDays / 2]) / 2.0;
  } else {
    // Odd number of days - middle value
    median = sales[numDays / 2];
  }

  // Return the median
  return median;
}


int findMode(double* sales, int numDays) {
  // Initialize variables
  int currentCount = 1;
  int maxCount = 0;
  double mode = sales[0]; // Initialize mode to first element

  // Loop through sorted data (assuming it's already sorted)
  for (int i = 1; i < numDays; ++i) {                       
    if (sales[i] == sales[i - 1]) {
      currentCount++;
    } else {
      if (currentCount > maxCount) {
        maxCount = currentCount;
        mode = sales[i - 1]; // Update mode if new max count found
      }
      currentCount = 1;
    }
  }

  // Check for last element as a mode
  if (currentCount > maxCount) {
    mode = sales[numDays - 1];
  }

  // Return the mode (assuming only one mode exists)
  // You can modify this to handle multiple modes (see notes)
  return mode;
}