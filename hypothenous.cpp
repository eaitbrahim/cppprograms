#include <iostream>
#include <cmath>

int main(){
  double a;
  double b;
  double c;

  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << std::sqrt(std::pow(a, 2) + std::pow(b, 2));

  return 0;
}