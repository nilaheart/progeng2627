#include <iostream>
int main(){
    int number = 7;
    int guess;
    std::cout << "let's play a guessing game, guess my number it's between 1 and 10:" << std::endl;
    std::cin >> guess;
    while (guess != number){
        std::cout << "please try again" << std::endl;
        std::cin >> guess;
    }
    std::cout << "well done, you got it!" << std::endl;
}