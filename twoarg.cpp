#include <iostream>
using namespace std;
void n_chars(char c, int n);

void n_chars(char c, int n) { // Displays c n times
    while (n > 0) { // Loop runs as long as n is positive
        n--;
        cout << c;
    }
}

int main() {
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    while (ch != 'q') {
        cout << "Enter an integer: ";
        cin >> times;

        n_chars(ch, times); // Print the character n times

        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "Bye\n";
    return 0;
}
