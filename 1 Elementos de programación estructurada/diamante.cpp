#include <iostream>
using namespace std;

int main() {
int rombo = 7;
for (int i = 1; i <= rombo; i += 2) {
 for (int j = 0; j < (rombo - i) / 2; j++) {
     cout << " ";
        }
     
for (int j = 0; j < i; j++) {
cout << "*";
}

cout << endl;
}

for (int i = rombo - 2; i >= 1; i -= 2) {
 for (int j = 0; j < (rombo - i) / 2; j++) {
 cout << " ";
}

for (int j = 0; j < i; j++) {
cout << "*";
}

cout << endl;
}
return 0;
}