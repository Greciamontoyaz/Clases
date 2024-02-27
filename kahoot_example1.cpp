#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {5, 0, 1, 4, 5};
    int *numPtr = nullptr;

    // Hacer que numPtr apunte al array
    numPtr = arr;
    //this reinterprets  the memory address of numPtr as an integer pointer
    //instead of a hexadecimal number
    cout << "arr     is: " << reinterpret_cast<long long>(arr) << endl;
    cout << "&arr[0] is: " << reinterpret_cast<long long>(&arr[0]) << endl;
    cout << "&arr[1] is: " << reinterpret_cast<long long>(&arr[1]) << endl;
    cout << "&arr[2] is: " << reinterpret_cast<long long>(&arr[2]) << endl;
    cout << "&arr[3] is: " << reinterpret_cast<long long>(&arr[3]) << endl;
    cout << "&arr[4] is: " << reinterpret_cast<long long>(&arr[4]) << endl;

    return 0;
}