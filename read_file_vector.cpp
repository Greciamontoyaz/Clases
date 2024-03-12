#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// Function to split a string by delimiter
vector<string> split(const string& str, char delimiter) {
  vector<string> tokens;
  string token;
  istringstream stream(str);
  while (getline(stream, token, delimiter)) {
    tokens.push_back(token);
  }
  return tokens;
}

int main() {
  string filename = "foo.csv";  // Replace with your actual filename
  ifstream file(filename);

  if (!file.is_open()) {
    cerr << "Error opening file: " << filename << endl;
    return 1;
  }

  // Get the number of columns from the header row
  string line;
  getline(file, line);
  vector<string> header = split(line, ',');
  int numCols = header.size();

  // Create a vector of vectors to store the data
  vector<vector<string>> data;

  // Read remaining data and store in the vector of vectors
  int numRows = 0;
  while (getline(file, line)) {
    vector<string> row = split(line, ',');
    if (row.size() != numCols) {
      cerr << "Warning: Inconsistent number of columns in a row" << endl;
      continue;
    }
    data.push_back(row);
    numRows++;
  }

  file.close();

  // Access elements in the data
  for (const vector<string>& row : data) {
    for (const string& cell : row) {
      cout << (cell) << " "; ///string to int 
    }
    cout << endl;
  }

    //convert    
    int matrix[numRows][numCols];
    for (int i=0; i<numRows; i++) {
    for (int j=0; j<numCols; j++) {
        matrix[i][j]=stoi(data[i][j]);
        cout << matrix[i][j] << " "; ///string to int 
    }
    cout << endl;
  }

  return 0;
}