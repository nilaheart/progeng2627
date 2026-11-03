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
    int n, n2, factor;
    std::cin >> n >> n2;

    for(int number=n; number<= n2; number++){
    if(smallestfactor(number, factor) == 0){
    std::cout << number << std::endl;
    }
}
return 0;
}