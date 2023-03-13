#include <iostream>
#include <string>

<<<<<<< HEAD
//Простая программа "hello_world"

int main()
=======
int
main()
>>>>>>> 15e9b20 (changed code-style)
{
  std::string name;
  std::cout << "Enter your name:";
  getline(std::cin, name);
  std::cout << "Hello world from " << name;
  return 0;
}
