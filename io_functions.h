#ifndef IO_FUNCTIONS_H
#define IO_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>

std::vector<int> get_array_from_console();

std::vector<int> get_array_from_file();

void print_results_to_console(int max_square, int max_cube, int min_index, 
int min_sum, int max_product, int count_even, 
int count_double_odd, int count_squares, int count_odd_squares);

void print_results_to_file(int max_square, int max_cube, int min_index, 
int min_sum, int max_product, int count_even, 
int count_double_odd, int count_squares, int count_odd_squares, std::string& filename);

#endif