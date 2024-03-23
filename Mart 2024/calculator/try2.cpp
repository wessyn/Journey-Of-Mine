#include <iostream>
#include "header.h"

int main()
{
  double num1 {insert()};
  double num2 {insert()};
  char symbol{xd()};
  switch (symbol)
  {
    case '+':
    std::cout << num1 << " " << symbol << " " << num2 << " = " << num1 + num2;
    break;
    case '-':
    std::cout << num1 << " " << symbol << " " << num2 << " = " << num1 - num2;
    break;
    case '*':
    std::cout << num1 << " " << symbol << " " << num2 << " = " << num1 * num2;
    break;
    case '/':
    std::cout << num1 << " " << symbol << " " << num2 << " = " << num1 / num2;
    break;
    
  }
} 