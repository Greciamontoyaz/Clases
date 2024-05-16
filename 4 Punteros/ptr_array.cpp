//this program uses a pointer to display the contents of an array

#include <iostream>
using namespace std;
int main() {
    const int SIZE = 8;
    int set[SIZE]={1, 2 ,3, 4, 5, 6, 7, 8 };
    int *numPtr=nullptr;
    int count;

    //make numPtr point to the set array
    numPtr=set;
    //use the pointer to display the array contents 
    cout <<"The   elements in the set are: \n";
    for (count =0; count<SIZE ; count++){
        cout <<*numPtr<<"\t";//dereference operator * is used here. It returns value pointed
        numPtr++;

    }
    cout <<"The   elements in the set are: \n";
    for (count =0; count<SIZE ; count++){
        numPtr--;
        cout <<*numPtr<<"\t";//dereference operator * is used here. It returns value pointed
    }
    return 0;
}