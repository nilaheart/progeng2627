#include <iostream>

int main(){
    double money, rate, euros;
    std::cout << "enter the amount of money in British Pounds" << std::endl;
    std::cin >> money;
    std::cout << "enter the exchange rate" << std::endl;
    std::cin >> rate;
    euros = money/rate;
    std::cout << "the equivalent amount in euros is " << euros;
}