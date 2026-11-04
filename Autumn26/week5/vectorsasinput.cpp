#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n, x, counter=0;
    std::cout << "how many elements do you want to store in the vector?" << std::endl;
    std::cin >> n;
    while(counter<n){
        std::cin >> x;
        v.push_back(x);
        counter = counter+1;
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}