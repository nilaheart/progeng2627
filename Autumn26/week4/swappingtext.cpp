#include <iostream>

void myswap(std::string& word1, std::string& word2){
    std::string tmp;
    tmp = word1;
    word1 = word2;
    word2 = tmp;
}
int main(){
    std::string word1, word2;
    std::cout << "please enter two words" << std::endl;
    std::cin >> word1 >> word2;
    std::cout << "word 1: " << word1 << std::endl;
    std::cout << "word 2: " << word2 << std::endl;

    myswap(word1, word2);

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "word 1: " << word1 << std::endl;
    std::cout << "word 2: " << word2 << std::endl;
}