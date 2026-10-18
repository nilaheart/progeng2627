#include <iostream>

int main(){
    double side1, side2, perimeter, area;
    std::cout << "enter the length for one side of the rectangle" << std::endl;
    std::cin >> side1;
    std::cout << "enter a different length for the other side of the rectangle" << std::endl;
    std::cin >> side2;
    perimeter = side1*2 + side2*2;
    area = side1*side2;
    std::cout << "the perimeter of the rectangle is " << perimeter << std::endl;
    std::cout << "the area of the rectangle is " << area << std::endl; 
}
