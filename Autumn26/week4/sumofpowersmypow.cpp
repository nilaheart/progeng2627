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
    double base, counter=0;
    int exp;
    std::cin >> base >> exp;

    for(int i=1; i<=exp; i++){
    counter = counter + (mypow(base, i));
    }
    std::cout << counter << std::endl;
}