#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin) {
    int i = 0;

    while (i < vin.size()) {
        if (vin[i] == s) {
            return i;
        }
        i = i + 1;
    }

    return i;
}

void union_vector(const std::vector<std::string>& vin1,
                  const std::vector<std::string>& vin2,
                  std::vector<std::string>& vout) {
    vout.clear();

    for (int i = 0; i < vin1.size(); i = i + 1) {
        if (search_vector(vin1[i], vout) == vout.size()) {
            vout.push_back(vin1[i]);
        }
    }

    for (int i = 0; i < vin2.size(); i = i + 1) {
        if (search_vector(vin2[i], vout) == vout.size()) {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1,
                         const std::vector<std::string>& vin2,
                         std::vector<std::string>& vout) {
    vout.clear();

    for (int i = 0; i < vin1.size(); i = i + 1) {
        if (search_vector(vin1[i], vin2) < vin2.size()) {
            if (search_vector(vin1[i], vout) == vout.size()) {
                vout.push_back(vin1[i]);
            }
        }
    }
}

int main() {
    std::string file1;
    std::string file2;
    std::ifstream infile1;
    std::ifstream infile2;

    std::cout << "Enter the first filename" << std::endl;
    std::cin >> file1;
    infile1.open(file1);

    std::cout << "Enter the second filename" << std::endl;
    std::cin >> file2;
    infile2.open(file2);

    if (!infile1.is_open() || !infile2.is_open()) {
        std::cout << "Error opening an input file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> warehouse1;
    std::vector<std::string> warehouse2;
    std::string fruit;

    while (infile1 >> fruit) {
        warehouse1.push_back(fruit);
    }

    while (infile2 >> fruit) {
        warehouse2.push_back(fruit);
    }

    std::vector<std::string> union_result;
    std::vector<std::string> intersection_result;

    union_vector(warehouse1, warehouse2, union_result);
    intersection_vector(warehouse1, warehouse2, intersection_result);

    std::ofstream union_file;
    std::ofstream intersection_file;
    union_file.open("union.txt");
    intersection_file.open("intersection.txt");

    if (!union_file.is_open() || !intersection_file.is_open()) {
        std::cout << "Error opening an output file" << std::endl;
        return EXIT_FAILURE;
    }

    int i = 0;
    while (i < union_result.size()) {
        union_file << union_result[i] << std::endl;
        i = i + 1;
    }

    i = 0;
    while (i < intersection_result.size()) {
        intersection_file << intersection_result[i] << std::endl;
        i = i + 1;
    }

    return 0;
}