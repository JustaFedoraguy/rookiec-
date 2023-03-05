// cin with strings 
#include <iostream>
#include <string> 

int main () 
{ 
 
  std::string mystr;
  std::cout << "What is your name? ";
  getline (std::cin, mystr);
  std::cout << "Hello " << mystr << ".\n";
  std::cout << "Whatis your Favorite FootBall team? ";
  getline (std::cin,mystr);
  std::cout << "I like " << mystr << " tool!\n";
  return 0;
}
