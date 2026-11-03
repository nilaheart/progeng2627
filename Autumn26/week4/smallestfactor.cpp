#include <iostream>

int smallestfactor(int n, int& factor){
        for(int c = 2; c <= n/c; c++){

        if( (n % c) == 0){
            factor = c;
            return factor;
        }
        }
    return 0;
}

int main(){
    int n, factor;
    std::cin >> n;
    std::cout << smallestfactor(n, factor) << std::endl;
}