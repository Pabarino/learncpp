#include <iostream>

int doubleNumber(int num)
{
    return num * 2;
}

int main() 
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    std::cout << "Double your number is: " << doubleNumber(x) << "\n";

}
