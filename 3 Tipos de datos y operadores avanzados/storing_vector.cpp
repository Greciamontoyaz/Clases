//this program stores, in  two vectors, the hours worked by
//5 employees and their hourly pay rates

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){ 
    const int NUM_EMPLOYEES = 5;
    vector<int> hours(NUM_EMPLOYEES);
    vector<double> payRate(NUM_EMPLOYEES);

    int indx;

    //input the data 
    cout<<"Enter the hours worked by"<<NUM_EMPLOYEES;
    cout<<"employees and their  hourly pay rates:\n";
    for (indx=0; indx<NUM_EMPLOYEES; indx++) {
        cout << "Employee #" << (indx+1) << ": ";
	    cin >> hours[indx] ;
        cout<<"Hourly Pay Rate: $";
        cin>> payRate[indx];
    }
    
    //displaying the data
    cout << fixed << setprecision(2);
    cout << "\nHere is the information you entered\n";
    cout << "-------------------------------\n  ";
    cout << "Emp #   Hours Worked      Gross Pay\n  ";
    cout << "---- ------------ -----------\n";
    for  (indx=0; indx<NUM_EMPLOYEES; indx++) {
       double grossPay =hours[indx]*payRate[indx];
       cout<<"\t"<<indx<<"\t"<<hours[indx]<<"\t \t"<<grossPay<<endl;
       
       }
}