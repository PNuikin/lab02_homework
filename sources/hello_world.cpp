#include <iostream>
#include <string>

//Простая программа "hello_world"

int main()
{
  std::string name;
  std::cout << "Enter your name:";
  getline(std::cin, name);
  std::cout << "Hello world from " << name;
  return 0;
}
