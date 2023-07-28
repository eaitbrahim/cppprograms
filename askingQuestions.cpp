#include<iostream>

int main(){
  std::string name;
  int age;
  std::string address;

  std::cout << "What's your name?" << "\n";
  std::cin >> name;

  std::cout << "What's your age?" << "\n";
  std::cin >> age;

  std::cout << "What's is your address?" << '\n';
  std::getline(std::cin >> std::ws, address);

  std::cout << "Hello " << name << ", your age is " << age << "\n";
  std::cout << "Your address is " << address;
  return 0;
}