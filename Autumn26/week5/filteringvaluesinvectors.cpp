#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    vout.clear();
    for(int i=0; i<vin.size(); i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> vin;
    std::vector<double> vout;
    int n;
    double value, t;

    std::cout << "how many values do you want to enter?" << std::endl;
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cout << "enter a value:" << std::endl;
        std::cin >> value;
        vin.push_back(value);
    }

    std::cout << "enter t" << std::endl;
    std::cin >> t;

    filter_v(vin, t, vout);

    for(int i=0; i<vout.size(); i++){
        std::cout << vout[i] << "\n";
    }
}