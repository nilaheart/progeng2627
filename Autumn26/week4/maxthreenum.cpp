#include <iostream>

int maximumnumber(int in1, int in2, int in3){
    if(in1>=in2 && in1>=in3){
        return in1;}
    else if (in2>=in1 && in2>=in3){
            return in2;
        }
    else{
        return in3;
    }
}

int main(){
    int in1, in2, in3;
    std::cin >> in1;
    std::cin >> in2;
    std::cin >> in3;
    std::cout << maximumnumber(in1, in2, in3);
}