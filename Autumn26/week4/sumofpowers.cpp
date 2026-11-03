#include <iostream>
#include <cmath>

int main(){
    int x, n, counter=0;
    std::cin >> x;
    std::cin >> n;
for(int i=1; i<=n; i++){
    counter = counter + std::pow(x, i);
}
std::cout << counter << std::endl;
}