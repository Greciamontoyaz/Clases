#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>


using namespace std;
void bubbleSort(int arr[], int n);
void sortArray(int arr[], int n);

int main(){

    int array_2[4]={2,6, 2,5} ;
    sort(array_2, array_2 + 4);
    for  (int i=0; i<4; i++) {   //Print the sorted elements of array[]
        cout << setw(3) << array_2[i];
    }

    cout<<endl;

    //redondeo para arriba     
    cout<<ceil(12/5.0)<<endl;//prints

    return 0;
    
}
