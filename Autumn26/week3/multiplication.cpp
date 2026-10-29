#include <iostream>

int main(){
    double x, a;
    int n, counter=1;

    std::cin >> x >> n;
    a=x;
    while (counter<n){
        x = a + x;
        counter = counter + 1;
    }

    std::cout << a << "x" << n << "=" << x << std::endl;
}