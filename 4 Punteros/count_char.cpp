//This program demonstrates a function, countChars 
//that counts the number of occurrences of each specific
//character appears in a string 

#include <iostream>
using namespace std;

int countChars( char*,char );

int main(){
    const int SIZE = 51;
    char userString[SIZE];
    char letter;
    //Get a string of the user
    cout<<"Enter a string (up to 50 characters)";
    cin.getline(userString,SIZE);

    //Choose a character whose occurrences within the string 
    // will be count 

    cout<<"Enter a character and I will tell you how many";
        cout<<"times it appears in the string"<<endl; 
    cin>>letter;

    //display the number of times  that the chosen character occurs 
    cout << letter<<" appears";
    cout <<countChars(userString,letter)<<" times.\n";
    return 0;

}

/////////////////////////////////////////////////////////////////

int countChars (char *strPtr, char ch)
{
    int times = 0;
    while (*strPtr != '\0')
    {
        if(*strPtr == ch)
            times ++;
        strPtr++;

    }
    return times;
}