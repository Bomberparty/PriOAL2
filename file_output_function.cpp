#include "io_functions.h"

void print_results_to_file(int max_square, int max_cube, int min_index, 
int min_sum, int max_product, int count_even, 
int count_double_odd, int count_squares, int count_odd_squares, std::string& filename) {
    std::ofstream output_file(filename);
    if (!output_file) {
        throw std::runtime_error("Не удалось открыть файл output.txt для записи!");
    }

    output_file << "Максимальный квадрат: " << max_square << '\n';
    output_file << "Максимальный куб: " << max_cube << '\n';
    output_file << "Индекс минимального элемента: " << min_index << '\n';
    output_file << "Минимальная сумма пары: " << min_sum << '\n';
    output_file << "Максимальное произведение пары: " << max_product << '\n';
    output_file << "Количество четных элементов: " << count_even << '\n';
    output_file << "Количество пар четных элементов: " << count_double_odd << '\n';
    output_file << "Количество квадратов: " << count_squares << '\n';
    output_file << "Количество нечетных квадратов: " << count_odd_squares << '\n';
}