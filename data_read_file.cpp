//checking only if there is a file with that name 
//this program uses an fstream object to write data to a file
#include <iostream>
#include <fstream> 
#include<string.h>
using namespace std;

int main ()
{   
    
    fstream dataFile;

    cout <<"Opening file ... \n";
    dataFile.open("demofile.txt", ios::out);   // opens the file in
    cout<<"Now writing data to the file .\n";
    if (!dataFile)
        cout<<"Error not  able to open the file.\n";
    else {

        dataFile << "Hi \n";
        dataFile.close();
        cout<<"Done. \n";

    }   
    ///////////////////////////////////////////////////////
    

    return 0;      
}