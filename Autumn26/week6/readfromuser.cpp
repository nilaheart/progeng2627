#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    std::string outputfilename;
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);
    std::cout << "enter name of output file" << std::endl;
    std::cin >> outputfilename;

    if(!infile.is_open()){
        std::cout << "error opening input file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<int> v;
    int tmp;
    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();

    std::ofstream outfile;
    outfile.open(outputfilename);

    if(!outfile.is_open()){
        std::cout << "error opening output file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i=v.size(); i>0; i--){
        outfile << v[i-1] << "\n";
    }
}