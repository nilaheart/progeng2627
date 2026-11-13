#include <iostream>
#include <fstream>
#include <string>
#include <vector>

bool read_words(const std::string& filename, std::vector<std::string>& words) { 
    std::ifstream infile;
    infile.open(filename);

    if (!infile.is_open()) {
        return false;
    }

    std::string word;
    while (infile >> word) {
        words.push_back(word);
    }

    return true;
}

int count_word(const std::vector<std::string>& text,
               const std::string& word) {
    int count = 0;

    for (int i = 0; i < text.size(); i = i + 1) {
        if (text[i] == word) {
            count = count + 1;
        }
    }

    return count;
}

int main() {
    std::string text_file;
    std::string words_file;
    std::string output_file;

    std::cout << "Enter the text filename" << std::endl;
    std::cin >> text_file;

    std::cout << "Enter the filename for the words to count" << std::endl;
    std::cin >> words_file;

    std::vector<std::string> text;
    std::vector<std::string> words;

    if (!read_words(text_file, text) || !read_words(words_file, words)) {
        std::cout << "Error opening an input file" << std::endl;
        return 1;
    }

    std::cout << "Enter the output filename" << std::endl;
    std::cin >> output_file;

    std::ofstream outfile;
    outfile.open(output_file);

    if (!outfile.is_open()) {
        std::cout << "Error opening the output file" << std::endl;
        return 1;
    }

    for (int i = 0; i < words.size(); i = i + 1) {
        outfile << words[i] << ": " << count_word(text, words[i])
                << std::endl;
    }

    return 0;
}