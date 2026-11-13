#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(){
    std::string user;
    std::cout << "enter the name of the text file" << std::endl;
    std::cin >> user;
    std::ifstream infile; 
    infile.open(user);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;

    }


    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}