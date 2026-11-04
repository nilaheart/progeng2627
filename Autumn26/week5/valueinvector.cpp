#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& numbers){
for(int i=0; i<numbers.size(); i++){
    if(numbers[i] == n){
        return i;
    }
}
    return -1;
}


int main(){
    std::vector<int> numbers{0, 1, 2, 5, 1};
    std::cout << search_vector(1, numbers) << "\n";
    std::cout << search_vector(3, numbers) << "\n";
    std::cout << search_vector(5, numbers) << "\n";
    numbers = {};
    std::cout << search_vector(1, numbers) << "\n";
}