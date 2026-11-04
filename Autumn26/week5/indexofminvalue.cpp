#include <iostream>
#include <vector>
#include <cmath>

int min_vector_element(const std::vector<double>&numbers){
    if(numbers.empty()){
        return -1;
    }
    int min_index = 0;
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i]<numbers[min_index]){
        min_index = i;
        }
    }
    return min_index;
}

int main(){
    std::vector<double> numbers{3, 2.2, 0.5};
    std::cout << min_vector_element(numbers) << "\n";
    numbers={};
    std::cout << min_vector_element(numbers) << "\n";
}