#include "my_functions.h"
#include "io_functions.h"
#include "my_constants.h"

int main() 
{
    std::string input_source;
    std::cout << "Выберите источник ввода (консоль или файл): ";
    std::getline(std::cin, input_source);

    std::vector<int> my_array;

    if (input_source == "консоль") 
    {
        my_array = get_array_from_console();
    } 
    else if (input_source == "файл") 
    {
        try 
        {
            my_array = get_array_from_file();
        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Ошибка: " << e.what() << '\n';
            return 1;
        }
    } 
    else 
    {
        std::cerr << "Ошибка: неверный выбор источника ввода!\n";
        return 1;
    }

    int max_square = max_square(my_array.data(), my_array.size());
    int max_cube = max_cube(my_array.data(), my_array.size());
    int min_index = min_index(my_array.data(), my_array.size());
    int min_sum = min_sum(my_array.data(), my_array.size());
    int max_product = max_product(my_array.data(), my_array.size());
    int count_even = count_even(my_array.data(), my_array.size());
    int count_double_odd = count_double_odd(my_array.data(), my_array.size());
    int count_squares = count_squares(my_array.data(), my_array.size());
    int count_odd_squares = count_odd_squares(my_array.data(), my_array.size());

    std::string output_source;
    std::cout << "Выберите источник вывода (консоль или файл): ";
    std::getline(std::cin, output_source);

    std::vector<int> my_array;

    if (input_source == "консоль") 
    {
        print_results_to_console(max_square, max_cube, int min_index, 
        min_sum, max_product, count_even, count_double_odd, 
        count_squares, count_odd_squares);
    } 
    else if (output_source == "файл") 
    {
        std::string filename;
        std::cout << "Введите имя файла для вывода значений: ";
        std::getline(std::cin, filename);
        void print_results_to_file(max_square, max_cube, min_index, 
        min_sum, max_product, count_even, 
        count_double_odd, count_squares, count_odd_squares, std::string& filename)
    } 
    else 
    {
        std::cerr << "Ошибка: неверный выбор источника ввода!\n";
        return 1;
    }



    return 0;
}