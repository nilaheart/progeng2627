#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void read_ad(std::ifstream& infile, std::vector<std::string>& ad) {
    std::string word;

    while (infile >> word) {
        ad.push_back(word);
    }
}

void read_translations(std::ifstream& infile, std::vector<std::string>& original, std::vector<std::string>& meaning) {
    std::string word;
    std::string replacement;

    while (infile >> word >> replacement) {
        original.push_back(word);
        meaning.push_back(replacement);
    }
}

void translate_ad(std::vector<std::string>& ad, const std::vector<std::string>& original, const std::vector<std::string>& meaning) {
    for (int i = 0; i < ad.size(); i = i + 1) {
        int j = 0;

        while (j < original.size() && ad[i] != original[j]) {
            j = j + 1;
        }

        if (j < original.size()) {
            ad[i] = meaning[j];
        }
    }
}

void write_ad(std::ofstream& outfile, const std::vector<std::string>& ad) {
    for (int i = 0; i < ad.size(); i = i + 1) {
        if (i > 0) {
            outfile << " ";
        }
        outfile << ad[i];
    }

    outfile << std::endl;
}

int main() {
    std::string ad_file;
    std::string translations_file;
    std::string output_file;

    std::cout << "Enter the advertisement filename" << std::endl;
    std::cin >> ad_file;

    std::cout << "Enter the translation pairs filename" << std::endl;
    std::cin >> translations_file;

    std::ifstream ad_input;
    std::ifstream translations_input;
    ad_input.open(ad_file);
    translations_input.open(translations_file);

    if (!ad_input.is_open() || !translations_input.is_open()) {
        std::cout << "Error opening an input file" << std::endl;
    }
    else {
        std::vector<std::string> ad;
        std::vector<std::string> original;
        std::vector<std::string> meaning;

        read_ad(ad_input, ad);
        read_translations(translations_input, original, meaning);
        translate_ad(ad, original, meaning);

        std::cout << "Enter the output filename" << std::endl;
        std::cin >> output_file;

        std::ofstream outfile;
        outfile.open(output_file);

        if (outfile.is_open()) {
            write_ad(outfile, ad);
        }
        else {
            std::cout << "Error opening the output file" << std::endl;
        }
    }
}