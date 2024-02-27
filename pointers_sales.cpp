//this program demonstrates that a pointer may be used as a 
//parameter to accept the address of an array

#include <iostream>
#include <iomanip>//includes money format data (and also time)
using namespace std;

//function prototypes

void getSales(double *, int);
double totalSales(double *,int);
double averagerSales(double *,int);


int main(){
    const int QTRS = 4; 
    double sales[QTRS];

    //get the sales  for each quarter
    getSales(sales, QTRS);

    //set the numeric output formatting 
    //two numbers after the decimal point
    //<iomanip>: Enables formatting output using functions like fixed, showpoint, and setprecision.
    cout << fixed << showpoint << setprecision(2);

    //display the total sales for the year 
    cout <<"The total sales for the year are $ ";
    cout <<totalSales(sales,QTRS)<<endl;

    cout <<"The average sales for the year are $ ";
    cout <<averagerSales(sales,QTRS)<<endl;

    return 0;

}

/////////////////////////////////////////////////////////////////////////
/*
Function : getSales This function uses a pointer to accept the 
address of an array of doubles. This function ask the user to 
enter sales figures and stores ther in an array
                                                                       */
void getSales(double *arr, int size ){

    for (int count =0; count <size;count++) {
        cout << "Enter sales figure for Quarter " 
             << (count+1) <<" : " ;
        cin >> arr[count] ;
    }
}

/////////////////////////////////////////////////////////////////////////
/*
Function : double totalSales(double *arr,int size){
This function uses a pointer to accept the 
address of an array of doubles. This function adds the array inputs 

                                                                       */
double totalSales(double *arr,int size){
    double sum=0.0;
    for  (int count =0; count<size; count++)
    {
        sum += *arr ;
        arr++;
    }
    return sum;
}
///////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
/*
Function : double totalSales(double *arr,int size){
This function uses a pointer to accept the 
address of an array of doubles. This function adds the array inputs 

                                                                       */
double averagerSales(double *arr,int size){
    double sum=0.0;
    for  (int count =0; count<size; count++)
    {
        sum += *arr ;
        arr++;
    }
    return sum/size;
}
///////////////////////////////////////////////////////////////////////////