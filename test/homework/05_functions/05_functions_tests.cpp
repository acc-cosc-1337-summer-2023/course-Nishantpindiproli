#include <iostream>
#include <vector>

int get_vector_max_value(const std::vector<int>& values) {
    int max_value = values[0];
    for (int i = 1; i < values.size(); i++) {
        if (values[i] > max_value) {
            max_value = values[i];
        }
    }
    return max_value;
}

std::vector<int> get_square_of_each_element(const std::vector<int>& values) {
    std::vector<int> squared_values;
    squared_values.reserve(values.size());

    for (int i = 0; i < values.size(); i++) {
        squared_values.push_back(values[i] * values[i]);
    }
    return squared_values;
}

// Unit tests
bool run_tests() {
    std::vector<int> values1 = {5, 7, -1, 99, -100, 10};
    if (get_vector_max_value(values1) != 99) {
        return false;
    }

    std::vector<int> values2 = {-50, 0, -51, 50, -99, -100};
    if (get_vector_max_value(values2) != 50) {
        return false;
    }

    std::vector<int> values3 = {3, 7, 2, 5, 10};
    std::vector<int> expected1 = {9, 49, 4, 25, 100};
    if (get_square_of_each_element(values3) != expected1) {
        return false;
    }

    std::vector<int> values4 = {6, 1, 8, 9, 4};
    std::vector<int> expected2 = {36, 1, 64, 81, 16};
    if (get_square_of_each_element(values4) != expected2) {
        return false;
    }

    return true;
}

int main() {
    if (run_tests()) {
        std::cout << "All tests passed!" << std::endl;
    } else {
        std::cout << "Some tests failed!" << std::endl;
    }

    return 0;
}
