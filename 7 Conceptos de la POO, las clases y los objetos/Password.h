#include <iostream>
#include <string>

using namespace std; 

class Password {
private:
   string password_;

  // Helper function to check password complexity (adjust as needed)
  bool isComplex() const {
    if (password_.length() < 8) {
      return false;
    }
    bool hasUpper = false, hasLower = false, hasDigit = false;
    for (char c : password_) {
      if (isupper(c)) {
        hasUpper = true;
      } else if (islower(c)) {
        hasLower = true;
      } else if (isdigit(c)) {
        hasDigit = true;
      }
    }
    return hasUpper && hasLower && hasDigit;
  }

public:
  // Constructor: Initialize with an empty password
  Password() : password_() {}

  // Set password (with complexity check)
  bool setPassword(const  string& password) {
    if (!isComplex()) {
       cerr << "Error: Password does not meet complexity requirements.\n";
      return false;
    }
    password_ = password;
    return true;
  }

  // Get the password (consider security implications for real use-cases)
  const  string& getPassword() const {
    return password_;
  }
};