#include <iostream>
#include <string>


int main()
{
   std::string username,password;
   std::cout<<"Enter username: ";
   std::cin>>username;
   std::cout<<"Enter password: ";
   std::cin>>password;
   std::cout << ((username == "admin" && password == "admin") ? "Login Successful\n" : "Login Failed\n");
    return 0;
}
