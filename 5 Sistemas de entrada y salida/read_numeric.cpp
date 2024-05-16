#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream inFile;
    int value[3];
    inFile.open("input.txt");
    // Read the first three integers from
    inFile>>value[0];
    inFile>>value[1];
    inFile>>value[2];
    
    inFile.close();
    
    int sum=0;
    
    cout<<"The sum is = "<<value[0]+value[1]+value[2]<<endl;
    
    return 0;
}