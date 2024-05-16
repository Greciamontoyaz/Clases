//this program uses an fstream object to write data to a file
#include <iostream>
#include <fstream> 

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
    cout<<"Openening the file, again";
    dataFile.open("demofile.txt",ios::out | ios::app );//opens the same file and
    cout<<"Writing more data to the file.\n";
    dataFile << "How are you? \n";                     //writes additional data
    dataFile.close();

    return 0;      
}