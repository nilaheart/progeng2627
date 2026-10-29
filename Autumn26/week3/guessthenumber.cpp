#include <iostream>
#include <string>   

int main(){
    int guess;
    int low=1;
    int high=100;
    std::string answer;
    while(true){
        guess=(low+high)/2;
        std::cout << "pick a number from 1 to 100 inclusive, is the number higher, equal or lower than " << guess << "?" << std::endl;
        std::cin >> answer;
        if(answer=="higher"){
            low = guess+1;
        }
        else if(answer=="lower"){
            high = guess-1;
        }
        else if (answer=="equal"){
            std::cout << "your number is " << guess << std::endl;
            return 0;
        }
        else{
            std::cout << "try again, the options are 'higher', 'lower' or 'ok" << std::endl;
        }
    }
}