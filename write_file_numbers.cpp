//this program uses an fstream object to write data to a file
#include <iostream>
#include <fstream> 
#include<string.h>
#include<iomanip>
using namespace std;

int main ()
{   
    string nameFile= "table.txt";  
    fstream dataFile;

    const int ROWS = 4; 
    const int COLS = 4;
    
    int  nums[ROWS][COLS]={1,2,3,4,  
                            5,5,6,7,
                            7,8,9,10,
                            11,12,13,14};



    cout <<"Opening file ... \n";
    fstream outFile(nameFile, ios::out);   // opens the file in
    cout<<"Now writing data to the file .\n";
    if (!dataFile)
        cout<<"Error not  able to open the file.\n";
    else {

        for(int row= 0; row < ROWS ;row++) {
            for(int col=0; col<COLS; col++) {
                outFile<<setw(8)<<nums[row][col];
            }
            outFile<<endl;
        }
    }   
    ///////////////////////////////////////////////////////
    outFile.close();
    cout<<"Done with the file. \n";

    return 0;      
}