#include <iostream>
#include <cstring> // for strncpy
#include <iomanip>   // for output formatting

using namespace std;

class Stock {
private:
  char company[30];
  int shares;
  double share_price; // renamed for clarity
  double total_value;

  void calculate_total_value() {
    total_value = shares * share_price;
  }

public:
  // Constructor (alternative to acquire)
  Stock(const char* co = "", int n = 0, double price = 0.0) {
    strncpy(company, co, 29);
    company[29] = '\0';
    shares = (n < 0) ? 0 : n;  // handle negative shares gracefully
    share_price = price;
    calculate_total_value();
  }

  void buy(int num, double price) {
    if (num < 0) {
      cerr << "Error: Cannot buy negative shares.\n";
      return;
    }
    shares += num;
    share_price = price;
    calculate_total_value();
  }

  void sell(int num, double price) {
    if (num < 0) {
      cerr << "Error: Cannot sell negative shares.\n";
      return;
    }
    if (num > shares) {
      cerr << "Error: Selling more shares than owned.\n";
      return;
    }
    shares -= num;
    share_price = price;
    calculate_total_value();
  }

  void update_price(double price) {
    share_price = price;
    calculate_total_value();
  }

  void show() const {
    cout << fixed << setprecision(2);
    cout << "Company: " << company << endl;
    cout << "Shares: " << shares << endl;
    cout << "Share Price: $" << share_price << endl;
    cout << "Total Worth: $" << total_value << endl;
  }
};

int main() {
  Stock stock1("NanoSmart", 20, 12.50);
  stock1.show();

  stock1.buy(15, 18.25);
  stock1.show();

  stock1.sell(10, 20.00);
  stock1.show();

  stock1.update_price(19.75);
  stock1.show();

  return 0;
}