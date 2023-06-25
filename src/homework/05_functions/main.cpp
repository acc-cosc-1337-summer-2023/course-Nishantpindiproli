#include <vector>
#include <iostream>
#include "func.cpp"
int main() {
    std::vector<int> max_values = {5, 7, -1, 99, -100, 10};
    std::vector<int> square_values = {6, 1, 8, 9, 4};

    int choice;
    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1 - Get max value" << std::endl;
        std::cout << "2 - Get square of elements" << std::endl;
        std::cout << "3 - Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int max_value = get_vector_max_value(max_values);
                std::cout << "Max value: " << max_value << std::endl;
                break;
            }
            case 2: {
                std::vector<int> squared_values = get_square_of_each_element(square_values);
                std::cout << "Squared values: ";
                for (const auto& value : squared_values) {
                    std::cout << value << " ";
                }
                std::cout << std::endl;
                break;
            }
            case 3: {
                std::cout << "Exiting..." << std::endl;
                return 0;
            }
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}
