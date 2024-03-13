#include <iostream>
#include <fstream> 
#include <string.h>
#include <iomanip>
#include <algorithm>

using namespace std;
void bubbleSort(int arr[], int n);
void sortArray(int arr[], int n);


int main(){
    
    int array[4]={2,1, 2,5} ; //Declare and initialize an integer array with

    bubbleSort(array,4);
    for  (int i=0; i<4; i++) {   //Print the sorted elements of array[]
    cout << setw(3) << array[i];
    }
    
    cout<<endl;

    int array_2[4]={2,6, 2,5} ;
    sortArray(array_2,4);
    for  (int i=0; i<4; i++) {   //Print the sorted elements of array[]
    cout << setw(3) << array_2[i];
    }

    return 0;
    
}


void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}


void sortArray(int arr[], int n) { ///#include <algorithm>
        sort(arr, arr + n);
        }