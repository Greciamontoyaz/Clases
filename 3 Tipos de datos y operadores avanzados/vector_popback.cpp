
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> values;

  // Store values in the vector.
  values.push_back(2);
  values.push_back(1);
  values.push_back(3);

  // Remove a value from the vector.
  cout << "The value[0] is " << values[0]<< endl;
  cout << "The value[1] is " << values[1]<< endl;
  cout << "The value[2] is " << values[2]<< endl;
  
  cout << "The size of values is " << values.size() << endl;
  values.pop_back();

  cout << "Popping a value from the vector \n";

  // Now remove another value from the vector.
  cout << "Popping a value from the vector \n";
  values.pop_back();

  // Remove the last value from the vector.
  cout << "Popping a value from the vector... \n";
  values.pop_back();

  cout << "The size of values is now " << values.size() << endl;

  
  return 0;
}