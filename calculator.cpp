#include <iostream>
#include <cmath>

int main(){
  char op;
  double num1;
  double num2;
  std::string result;

  std::cout << "***************Calculator***************" << "\n";
 
  std::cout << "Enter either (+ - * /):" << "\n";
  std::cin >> op;

  std::cout << "Enter #1:" << "\n";
  std::cin >> num1;


  std::cout << "Enter #2" << "\n";
  std::cin >> num2;

  switch(op){
    case '+':
      result = "result: " + std::to_string(num1 + num2);
      break;
    case '-':
      result = "result: " + std::to_string(num1 - num2);
      break;
    case '*':
      result = "result: " + std::to_string(num1 * num2);
      break;
    case '/':
      result = "result: " + std::to_string(num1 / num2);
      break;
    default:
      result = "That wasn't a valid response";
      break;
  }
  std::cout << result << "\n";

  std::cout << "****************************************" << "\n";
 
  return 0;
}