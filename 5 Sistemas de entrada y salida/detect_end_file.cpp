#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    inputFile.open("input.txt");

    while(inputFile>>number)
        cout<<number<<endl;

    inputFile.close();
    return 0;   
}