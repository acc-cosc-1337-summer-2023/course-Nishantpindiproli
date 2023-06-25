//add include statements
#include <iostream>
#include <vector>
#include <algorithm>

int get_vector_max_value(const std::vector<int>& values) {
    if (values.empty()) {
        std::cout << "Error: Empty vector" << std::endl;
        return 0;
    }
  
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
//add function code here