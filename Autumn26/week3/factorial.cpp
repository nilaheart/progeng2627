#include <iostream>

int main(){
    int n, f=1;
    std::cin >> n;
    for(int i=n; i!=0; i--){
        f = f*i;
    }
    std::cout << f << std::endl;
}