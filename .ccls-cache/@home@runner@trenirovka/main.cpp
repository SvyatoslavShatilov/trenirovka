#include <iostream>
/*
int main() {
  int a;
  int b;
  std::cout << "Введите число для умножения: ";
  std::cin >> a;
  b = a * a;
  std::cout << "Вы ввели число и получили результат: " << b << "\n";
}*/

int main() {
 int productCost;
 int deliveryCost;
 int discount;
  std::cout << "Введите стоимость товара: ";
  std::cin >> productCost;
  std::cout << "Введите стоимость доставки: ";
  std::cin >> deliveryCost;
  std::cout << "Введите размер скидки: ";
  std::cin >> discount;
  
 int price = productCost + deliveryCost - discount;

 std::cout << "Стоимость товара: " << productCost << "\n";
 std::cout << "Cтоимость доставки: " << deliveryCost << "\n";
 std::cout << "Скидка: " << discount << "\n";
 std::cout << "---------\n";
 std::cout << "Итого: " << price << "\n";
}