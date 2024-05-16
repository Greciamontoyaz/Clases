#include <fstream>

int main() {
    // Create an output filestream object
    std::ofstream myFile("foo.csv");
    
    // Send data to the stream
    myFile << "Foo1,Bar1,Baz1\n";
    myFile << "1,2,3\n";
    myFile << "2,3,4\n";
    myFile << "3,4,5\n";
    
    // Close the file
    myFile.close();
    
    return 0;
}