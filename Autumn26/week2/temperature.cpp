#include <iostream>4

int main (){
    double temp, conversion;
    std::cout << "enter a temperature in degrees Celsius" << std::endl;
    std::cin >> temp;
    conversion = temp*33.8;
    std::cout << "the temperature in Fahrenheit is " << conversion << std::endl;
}