#include <iostream>
#include <fstream> 
#include<string.h>
#include<iomanip>
using namespace std;


bool openFileIn(fstream &, string);
void showContents(fstream &);

int main ()
{   
    string nameFile= "four_letter_word.txt";  
    fstream dataFile;

    
    cout <<"Opening file ... \n";
    if (openFileIn(dataFile,nameFile)){
        cout <<"File opened successfully. \n";
        //show the contents of the file
        showContents(dataFile);
        dataFile.close();
        cout<<"Done";
    }
        
    else {
        cout<<"Error not  able to open the file.\n";
    }   
    ///////////////////////////////////////////////////////
    

    return 0;      
}

bool openFileIn(fstream &file, string name){
    file.open(name  ,ifstream::in );
    if(file.fail())
        return false;
    else
        return true;
}


void showContents(fstream &file)
{
string line;
while (getline(file, line)) {
    cout << line << endl;
    if(line =="help"){
    cout<<"The  word is help\n";      
    break;
    }
}

}