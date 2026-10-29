#include <iostream>

int main(){
    int x, n;
    std::cin >> x >> n;
    int f=x;
    for(int i=1; i<n; i++){
        x=x*f;
    }
    if(n==0){
        x=1;
    }
    std::cout << x << std::endl;
}