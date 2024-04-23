#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
string fileName;
cout << "Enter the file name: ";
cin >> fileName;

fstream file;
file.open(fileName, ios::in); // Open the file in read mode

if (file.is_open()) {
cout << "The file " << fileName << " exists." << endl;
cout << "Would you like to open it and write to it (y/n)? ";
char choice;
cin >> choice;

if (choice == 'y' || choice == 'Y') {
file.open(fileName, ios::out | ios::app); // Open the file in append mode
cout << "Opening file for writing..." << endl;

// Write to the file here (not shown in the code)

cout << "Writing to file complete." << endl;

} else {
cout << "Option to write to file declined." << endl;
}

file.close(); // Close the file

} else {
cout << "The file " << fileName << " does not exist." << endl;
cout << "Would you like to create a new file with this name (y/n)? ";
char choice;
cin >> choice;

if (choice == 'y' || choice == 'Y') {
file.open(fileName, ios::out); // Create a new file
cout << "Creating new file " << fileName << "..." << endl;

// Write to the file here (not shown in the code)

cout << "Writing to file complete." << endl;

} else {
cout << "Option to create new file declined." << endl;
}

file.close(); // Close the file
}

return 0;
}