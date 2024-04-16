#include <iostream>

int main() {
  int x = 50, y = 60, z = 70;
  int *ptr = nullptr;

  std::cout << x << " " << y << " " << z << std::endl;

  ptr = &x;
  *ptr = 10;

  ptr = &y;
  *ptr *= 5;

  ptr = &z;
  *ptr /= 2;

  std::cout << x << " " << y << " " << z << std::endl;

  return 0;
}