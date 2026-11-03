#include <iostream>

int maximumnumber(int in1, int in2){
    if(in1>in2){
        return in1;
    }
    else{
        return in2;
    }
}

int main(){
    int in1, in2;
    std::cin >> in1;
    std::cin >> in2;
    std::cout << maximumnumber(in1, in2);
}