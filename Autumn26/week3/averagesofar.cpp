#include <iostream>

int main(){
    int n, total=0;
    double average=0, counter=0;
    std::cout << "enter a number:" << std::endl;
    std::cin >> n;

    while (n!=0){
        counter = counter+1;
        total = total + n;
        average = (total)/counter;
        std::cout << "the average so far is: " << average << std::endl;
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
    }
}