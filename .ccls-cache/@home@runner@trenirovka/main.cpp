#include <iostream>

int main() {
  int a;
  int b;
  std::cout << "Введите число для умножения: ";
  std::cin >> a;
  b = a * a;
  std::cout << "Вы ввели число и получили результат: " << b << "\n";
}