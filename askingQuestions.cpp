#include<iostream>

int main(){
  std::string name;
  int age;

  std::cout << "What's your name?" << "\n";
  std::cin >> name;
  std::cout << "What's your age?" << "\n";
  std::cin >> age;

  std::cout << "Hello " << name << ", your age is " << age;
  return 0;
}