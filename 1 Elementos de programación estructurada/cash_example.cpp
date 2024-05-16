#include <iostream>
using namespace std;

bool validatePassword(int password);
void checkBalance(float balance);
float depositMoney( float balance);
float withdrawMoney(float balance);//withdraw money prototype
int main() {

    int choice;
    bool access;
    int password;
    float balance = 50000;
    ///float balance or moneyyy

    cout << "Enter a 4-digit password: ";
            cin >> password;
            access = validatePassword(password);
            cout << access << endl;
    do {
    cout << "\nMenu:\n"
         << "1. Check balance\n"
         << "2. Deposit money\n"
         << "3. Withdraw money\n"
         << "4. Exit\n";

    cin >> choice;

    switch (choice) {
        case 1:
            //check balance function call
            checkBalance(balance);
            break;
        case 2:
        //deposit money function call
            balance=depositMoney(balance);
            break;
        case 3:
        //withdraw money function call
            balance=withdrawMoney(balance);
            break;
        default:
            cout << "Bye.\n";
            access=false;
            
    }
    }while(access);
    return 0;
}

bool validatePassword(int password) {
    int savedPassword=1234;
    if (savedPassword==password) {
        return true;
    }
    else return false;
}

void checkBalance(float balance) {
    cout <<  "Your current balance is $" << balance << "." << endl;
}

float depositMoney(float balance) {
    float money=0;
    cout << "How much would you like to deposit? ";
    cin >> money;
    cout <<  "Your new balance is $" << balance + money << "." << endl;
    return balance + money;
}

float withdrawMoney( float balance) {
    float money=0;
    cout << "How much would you like to withdraw? ";
    cin >> money;
    //checking if the user has enough money in their account. 
    if (money>balance) {
        cout << "Sorry, your account does not have sufficient funds for this transaction."<<endl;
        return balance - 0;
    }else {
        cout <<  "Your new balance is $" << balance - money << "." << endl;
        return balance - money;
    }   
    
}