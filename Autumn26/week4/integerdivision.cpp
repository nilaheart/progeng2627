#include <iostream>
#include <cmath>

void periarea(int n1, int n2, int& div, int& rem){
    div = n1/n2;
    rem = n1%n2;
}

int main(){
    int n1, n2, div, rem;
    std::cout << "enter the two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    periarea(n1, n2, div, rem);
    std::cout << n1 << " / " << n2 << " = " << div << " remainder " << rem << std::endl;
}