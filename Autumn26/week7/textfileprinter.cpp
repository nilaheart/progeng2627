#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
int main(int argc, char* argv[]){
    
    if(argc != 2){
        std::cout << "this program accepts exactly one argument" << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream infile;
    infile.open(argv[1]);
    std::string line;
    if(infile.is_open()){
        while(std::getline(infile, line)){
            std::cout << line << std::endl;
        }
        //std::cout << "the file exists" << std::endl;
        //std::cout << "and the content is:" << std::endl;
    }
    else{
        std::cout << "the file does not exist" << std::endl;
    }

}