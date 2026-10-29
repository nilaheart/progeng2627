#include <iostream>

int main(){
    int n, c=0, c2=0;
    std::cin>>n;

    while(c2<n){
        while(c<n){
        c = c+1;
        std::cout << "*";
        }
        c=0;
        std::cout << std::endl;
        c2=c2+1;
    }
}