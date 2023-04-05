#include "io_functions.h"

std::vector<int> get_array_from_console() {
    std::string input;
    bool valid_input = false;
    std::vector<int> arr;

    while (!valid_input) {
        std::cout << "Введите элементы массива через пробел (первый элемент положительный, в массиве должен быть хотя бы один отрицательный): ";
        std::getline(std::cin, input);

        std::stringstream ss(input);
        int num;
        bool first_num = true;
        bool negative_num = false;
        while (ss >> num) {
            if (first_num && num < 0) {
                std::cout << "Ошибка ввода: первый элемент должен быть положительным!\n";
                break;
            }
            if (num < 0) {
                negative_num = true;
            }
            arr.push_back(num);
            first_num = false;
        }

        if (first_num || !negative_num) {
            std::cout << "Ошибка ввода: должен быть хотя бы один отрицательный элемент!\n";
            arr.clear();
        } else {
            valid_input = true;
        }
    }

    return arr;
}