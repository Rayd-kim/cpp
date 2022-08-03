#include <iostream>
#include <iomanip>

int main(void)
{
    std::string str;
    std::cin >> str;
    std::cout.setf(std::ios::left);
    std::cout << std::setw(10) << str << std::endl;
    std::cout.setf(std::ios::right);
    std::cout << std::setw(10) << str << std::endl;
}