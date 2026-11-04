#include <iostream>
#include <vector>

int main(){
    std::vector<double> numbers;
    double firstelement, secondelement, thirdelement, result;
    std::cin >> firstelement >> secondelement >> thirdelement;
    numbers.push_back(firstelement);
    numbers.push_back(secondelement);
    numbers.push_back(thirdelement);
    result = numbers[0] * (numbers[1] + numbers[2]);
    std::cout << result << std::endl;
}
