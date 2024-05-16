#include <fstream>
#include <iostream>

int main() {
  // Create an ofstream object (output file stream) for writing to a file
  std::ofstream myFile("example.txt");

  // Check if the file was opened successfully
  if (myFile.is_open()) {
    // Write data to the file using the insertion operator (<<)
    myFile << "This is some text written to the file." << std::endl;
    myFile << "You can write multiple lines here." << std::endl;

    // Close the file
    myFile.close();

    std::cout << "Data written to example.txt successfully." << std::endl;
  } else {
    std::cerr << "Error opening file!" << std::endl;
  }

  return 0;
}