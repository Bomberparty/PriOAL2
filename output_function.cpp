#include "io_functions.h"

void print_results_to_console(int max_square, int max_cube, int min_index, 
int min_sum, int max_product, int count_even, 
int count_double_odd, int count_squares, int count_odd_squares) {
    std::cout << "Максимальный квадрат: " << max_square << '\n';
    std::cout << "Максимальный куб: " << max_cube << '\n';
    std::cout << "Индекс минимального элемента: " << min_index << '\n';
    std::cout << "Минимальная сумма пары: " << min_sum << '\n';
    std::cout << "Максимальное произведение пары: " << max_product << '\n';
    std::cout << "Количество четных элементов: " << count_even << '\n';
    std::cout << "Количество пар четных элементов: " << count_double_odd << '\n';
    std::cout << "Количество квадратов: " << count_squares << '\n';
    std::cout << "Количество нечетных квадратов: " << count_odd_squares << '\n';
}