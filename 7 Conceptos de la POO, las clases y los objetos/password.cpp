#include <iostream>
#include "Password.h" // Assuming Password.h contains the class definition

int main() {
  Password userPassword;

  string inputPassword;

  do {
    std::cout << "Enter a new password (minimum 8 characters, must include uppercase, lowercase, and digit): ";
    std::getline(std::cin, inputPassword);
  } while (!userPassword.setPassword(inputPassword));

  std::cout << "Password set successfully!\n";

  // Simulate password verification (replace with actual verification logic)
  std::cout << "Enter password again for verification: ";
  std::getline(std::cin, inputPassword);

  if (userPassword.getPassword() == inputPassword) {
    std::cout << "Password verified.\n";
  } else {
    std::cout << "Passwords do not match!\n";
  }

  return 0;
}