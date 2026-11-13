#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged) {
    merged.clear();

    int i = 0;
    int j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] < v2[j]) {
            merged.push_back(v1[i]);
            i = i + 1;
        }
        else {
            merged.push_back(v2[j]);
            j = j + 1;
        }
    }

    while (i < v1.size()) {
        merged.push_back(v1[i]);
        i = i + 1;
    }

    while (j < v2.size()) {
        merged.push_back(v2[j]);
        j = j + 1;
    }
}

int main() {
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;
    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if (out == expected_output) {
        std::cout << "Test 1 passed" << std::endl;
    }
    else {
        std::cout << "Test 1 not passed" << std::endl;
    }

    v1 = {5, 7, 9};
    v2 = {-3, 0, 2};
    expected_output = {-3, 0, 2, 5, 7, 9};

    merge_vectors_int(v1, v2, out);

    if (out == expected_output) {
        std::cout << "Test 2 passed" << std::endl;
    }
    else {
        std::cout << "Test 2 not passed" << std::endl;
    }

    v1 = {};
    v2 = {2, 4, 8};
    expected_output = {2, 4, 8};

    merge_vectors_int(v1, v2, out);

    if (out == expected_output) {
        std::cout << "Test 3 passed" << std::endl;
    }
    else {
        std::cout << "Test 3 not passed" << std::endl;
    }

    v1 = {};
    v2 = {};
    expected_output = {};

    merge_vectors_int(v1, v2, out);

    if (out == expected_output) {
        std::cout << "Test 4 passed" << std::endl;
    }
    else {
        std::cout << "Test 4 not passed" << std::endl;
    }

    return 0;
}