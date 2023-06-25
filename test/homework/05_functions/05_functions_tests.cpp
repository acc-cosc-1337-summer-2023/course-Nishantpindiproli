#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
#include <iostream>
#include <vector>
#include <cassert>

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
void test_get_vector_max_value() {
    std::vector<int> values1 = {5, 7, -1, 99, -100, 10};
    assert(get_vector_max_value(values1) == 99);

    std::vector<int> values2 = {-50, 0, -51, 50, -99, -100};
    assert(get_vector_max_value(values2) == 50);
}

void test_get_square_of_each_element() {
    std::vector<int> values1 = {3, 7, 2, 5, 10};
    std::vector<int> expected1 = {9, 49, 4, 25, 100};
    assert(get_square_of_each_element(values1) == expected1);

    std::vector<int> values2 = {6, 1, 8, 9, 4};
    std::vector<int> expected2 = {36, 1, 64, 81, 16};
    assert(get_square_of_each_element(values2) == expected2);
}

int main() {
    test_get_vector_max_value();
    std::cout << "get_vector_max_value passed all tests!" << std::endl;

    test_get_square_of_each_element();
    std::cout << "get_square_of_each_element passed all tests!" << std::endl;

    return 0;
}
