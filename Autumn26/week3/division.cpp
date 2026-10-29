#include <iostream>

int main(){
    int n, q=0;
    std::cout << "enter a number:" << std::endl;
    std::cin >> n;

    while (n>=3){
        n = n-3;
        q = q+1;
    }
 
    std::cout << "the quotient is " << q << std::endl;
    std::cout << "the remainder is " << n << std::endl;
}