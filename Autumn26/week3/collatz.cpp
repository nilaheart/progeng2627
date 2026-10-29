#include <iostream>

int main(){
    int n, c=0, maxnum;
    std::cin >> n;
    maxnum = n;
    while(n!=1){
        if(n%2==0){
            n=n/2;
            c=c+1;
            std::cout << n << std::endl;
        }
        else{
            n=(3*n)+1;
            std::cout << n << std::endl;
            c=c+1;
            }
        if(n>maxnum){
            maxnum = n;
        }
        }
    std::cout << "this took " << c << " steps" << std::endl;
    std::cout << "the maximum number generated was " << maxnum << std::endl;
}