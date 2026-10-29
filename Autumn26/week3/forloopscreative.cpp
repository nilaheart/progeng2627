#include <iostream>

int main(){
    int number, multiple;
    std::cout << "pick a number between 1 and 10" <<std::endl;
    std::cin >> number;
    for (int counter=1; counter<=number; counter++){
        multiple = 3*counter;
        std::cout << multiple << "\t";
    }
    std::cout << "these are the first " << number << " multiples of 3" << std::endl; 
}