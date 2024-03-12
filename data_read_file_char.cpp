#include <iostream>
#include <fstream> 
#include<string.h>
#include<iomanip>
using namespace std;


bool openFileIn(fstream &, string);


int main ()
{   
    string nameFile= "demofile.txt";  
    fstream dataFile;
    char ch;
    
    dataFile.open(nameFile, ios::in);

    cout <<"Opening file ... \n";
    if (dataFile) {
        cout <<"File opened successfully. \n";
        //show the contents of the file
        dataFile.get(ch);

        while (dataFile){
            cout<<ch;
            dataFile.get(ch);
        }
        dataFile.close();
        cout<<"Done";
    }
        
    else {
        cout<<"Error not  able to open the file.\n";
    }   
    ///////////////////////////////////////////////////////
    

    return 0;      
}
