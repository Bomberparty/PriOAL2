#include "my_functions.cpp"
#include "input_function.cpp"
#include "output_function.cpp"
#include "file_input_function.cpp"
#include "file_output_function.cpp"
#include "my_constants.h"

int main() 
{
    bool repeatable = true;

    while(repeatable) {
        std::vector<int> my_array;
        while(true) {
            std::string input_source;
            std::cout << "Выберите источник ввода (консоль или файл): ";
            std::getline(std::cin, input_source);

            if (input_source == "консоль") 
            {
                my_array = get_array_from_console();
                std::vector<int> &my_array = my_array;
                break;
            } 
            else if (input_source == "файл") 
            {
                try 
                {
                    my_array = get_array_from_file();
                    repeatable = false;
                } 
                catch (const std::exception& e) 
                {
                    std::cerr << "Ошибка: " << e.what() << '\n';
                    return 1;
                }
                break;
            } 
            else 
            {
                std::cerr << "Ошибка: неверный выбор источника ввода!\n";
                continue;
            }
        }
        
        while(true) {
            std::string output_source;
            std::cout << "Выберите источник вывода (консоль или файл): ";
            std::getline(std::cin, output_source);

            if (output_source == "консоль") 
            {
                print_results_to_console(max_square(my_array.data(), my_array.size()),
                    max_cube(my_array.data(), my_array.size()),
                    min_index(my_array.data(), my_array.size()),
                    min_sum(my_array.data(), my_array.size()),
                    max_product(my_array.data(), my_array.size()),
                    count_even(my_array.data(), my_array.size()),
                    count_double_odd(my_array.data(), my_array.size()),
                    count_squares(my_array.data(), my_array.size()),
                    count_odd_squares(my_array.data(), my_array.size()));
                break;
            } 
            else if (output_source == "файл") 
            {
                std::string filename = "output.txt";
                print_results_to_file(max_square(my_array.data(), my_array.size()),
                    max_cube(my_array.data(), my_array.size()),
                    min_index(my_array.data(), my_array.size()),
                    min_sum(my_array.data(), my_array.size()),
                    max_product(my_array.data(), my_array.size()),
                    count_even(my_array.data(), my_array.size()),
                    count_double_odd(my_array.data(), my_array.size()),
                    count_squares(my_array.data(), my_array.size()),
                    count_odd_squares(my_array.data(), my_array.size()), filename);
                break;
            } 
            else 
            {
                std::cerr << "Ошибка: неверный выбор источника ввода!\n";
                continue;
            }
        }
        
        if(repeatable) {
            while(true) {
                std::string ans;
                std::cout << "Желаете повторить процесс? [Да/Нет]:";
                std::getline(std::cin, ans);
                if (ans == "Да" || ans == "да") {
                    break;
                }else if (ans == "Нет" || ans == "нет") {
                    return 0;
                }else{
                    std::cout << "Ошибка. Некорректный ввод." << std::endl;
                }
            }
        }
    }
    
    return 0;
}