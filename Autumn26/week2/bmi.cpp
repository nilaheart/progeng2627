#include <iostream>
int main(){
    double height, weight, bmi;
    bmi = 0.0;
    std::cout << "please enter your weight" << std::endl;
    std::cin >> weight;
    std::cout << "please enter your height" << std::endl;
    std::cin >> height;
    bmi = weight/(height*height);
    std::cout << "your bmi is " << bmi << std::endl;
}