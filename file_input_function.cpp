#include "io_functions.h"

std::vector<int> get_array_from_file() {
    std::ifstream input_file("input.txt");
    if (!input_file) {
        throw std::runtime_error("Не удалось открыть файл " + filename);
    }

    std::string line;
    bool valid_input = false;
    std::vector<int> arr;

    while (!valid_input && std::getline(input_file, line)) {
        std::stringstream ss(line);
        int num;
        bool first_num = true;
        bool negative_num = false;
        while (ss >> num) {
            if (first_num && num > 0) {
                throw std::runtime_error("Ошибка в файле: первый элемент должен быть положительным!");
            }
            if (num < 0) {
                negative_num = true;
            }
            arr.push_back(num);
            first_num = false;
        }

        if (first_num || !negative_num) {
            throw std::runtime_error("Ошибка в файле: должен быть хотя бы один отрицательный элемент!");
        } else {
            valid_input = true;
        }
    }

    if (arr.empty()) {
        throw std::runtime_error("Ошибка чтения файла: файл пуст или содержит некорректные данные!");
    }

    return arr;
}