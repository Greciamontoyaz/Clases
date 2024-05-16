//this program stores, in  two vectors, the hours worked by
//5 employees and their hourly pay rates

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){ 
    
    vector<int> hours;
    vector<double> payRate;
    int numEmployees;
    int indx;
    int tempHours;
    double tempRate;
    //input the data 
    cout << "How many employees do you have? ";
    cin >> numEmployees;


    cout<<"Enter the hours worked by"<<numEmployees;
    cout<<"employees and their  hourly pay rates:\n";
    for (indx=0; indx<numEmployees; indx++) {
        cout << "Employee #" << (indx+1) << ": ";
	    cin >> tempHours ;
        hours.push_back(tempHours);
        cout<<"Hourly Pay Rate: $";
        cin>> tempRate;
        payRate.push_back(tempRate);
    }
    
    //displaying the data
    cout << fixed << setprecision(2);
    cout << "\nHere is the information you entered\n";
    cout << "-------------------------------\n  ";
    cout << "Emp #   Hours Worked      Gross Pay\n  ";
    cout << "---- ------------ -----------\n";
    for  (indx=0; indx<numEmployees; indx++) {
       double grossPay =hours[indx]*payRate[indx];
       cout<<"\t"<<indx<<"\t"<<hours[indx]<<"\t \t"<<grossPay<<endl;
       
       }
}