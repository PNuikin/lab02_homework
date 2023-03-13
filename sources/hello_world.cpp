#include <iostream>
#include <string>

//Simple "hello world" programm

int main()
{
  std::string name;
  std::cout << "Enter your name:";
  getline(std::cin, name);
  std::cout << "Hello world from " << name;
  return 0;
}