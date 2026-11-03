#include <iostream>

double mypow_positive(double base, int exp){
    double result=1;
    int power;

    for(power=1; power<=exp; power++){
        result = result*base;

    }
    return result;
}

double mypow(double base, int exp){
    double result;
    if(exp < 0){
       result = 1 / mypow_positive(base, -exp);
    }
    else{
        result = mypow_positive(base, exp);
    }

    return result;
}

int main(){
    std::cout << (mypow(2, 3) - 8) << std::endl;
    std::cout << (mypow(0.5, 2) - 0.25) << std::endl;
    std::cout << (mypow(1, 0) - 1) << std::endl;
    std::cout << (mypow(4, -2) - 0.0625) << std::endl;
    std::cout << (mypow(2, -2) - 0.25) << std::endl;
}