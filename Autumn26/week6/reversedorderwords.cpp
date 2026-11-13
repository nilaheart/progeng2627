#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::string user;
    std::ifstream infile; 
    std::cout << "enter file name" << std::endl;
    std::cin >> user;
    infile.open(user);

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
    }

    infile.close(); 
    for(int i=v.size(); i>0; i--){
        std::cout << v[i-1] << std::endl;
    }
}