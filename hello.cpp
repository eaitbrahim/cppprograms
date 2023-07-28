#include<iostream>

int main(){
  std::cout << "I like pizza!" << '\n';
  std::cout << "It's really good!" << std::endl;

  int age = 45;
  char currency = '$';
  double total = 15890.78;
  std::string name = "Elmehdi";

  std::cout << "Hello " << name << " your age is " << age << " and you have " << currency << total;
  return 0;
}