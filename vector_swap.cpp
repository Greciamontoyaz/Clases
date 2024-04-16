#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Create two vectors
  vector<int> numbers1 = {1, 2, 3};
  vector<int> numbers2 = {4, 5, 6};

  cout << "Before swap: \n";
  cout << "numbers1: ";
  for (int num : numbers1) {
    cout << num << " ";
  }
  cout << endl;

  cout << "numbers2: ";
  for (int num : numbers2) {
    cout << num << " ";
  }
  cout << endl;

  // Swap the contents of the vectors using std::vector::swap
  numbers1.swap(numbers2);

  cout << "After swap: \n";
  cout << "numbers1: ";
  for (int num : numbers1) {
    cout << num << " ";
  }
  cout << endl;

  cout << "numbers2: ";
  for (int num : numbers2) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}