#include <iostream>

int main() 
{
    std::cout << "Enter an integer: ";
    int a{};
    std::cin >> a;
    std::cout << "Enter a second integer: ";
    int b{};
    std::cin >> b;
    int add {a+b};
    int sub {a-b};
    std::cout << a << " + " << b << " = " << add << ".\n";
    std::cout << a << " - " << b << " = " << sub << ".\n";

}
