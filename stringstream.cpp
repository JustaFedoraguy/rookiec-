#include <iostream>
#include <string>
#include <sstream>
// stringstream example and practice
int main()
{
  std::string mystr;
  float price = 0;
  int quantity = 0;

  std::cout << "Enter price: ";
  getline(std::cin, mystr);

  
  std::stringstream(mystr) >> price;

  std::cout << "Enter quantity: ";
  getline(std::cin, mystr);

  
  std::stringstream(mystr) >> quantity;

  
  std::cout << "Total price: " << price * quantity << std::endl;
  return 0;
}
