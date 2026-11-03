#include <iostream>
#include <cmath>

void periarea(double n1, double n2, double& perimeter, double& area){
    perimeter = 2*n1+2*n2;
    area = n1*n2;
}

int main(){
    double n1, n2, perimeter, area;
    std::cout << "enter the length and width of the rectangle" << std::endl;
    std::cin >> n1 >> n2;
    periarea(n1, n2, perimeter, area);
    std::cout << "the perimeter is " << perimeter << " and the area is " << area << std::endl;
}