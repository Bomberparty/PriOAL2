#include "my_functions.h"
namespace my_functions
{


    int max_square(int a[], int n) {
        int max_val = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] > max_val) {
                max_val = a[i];
            }
        }
        return max_val * max_val;
    }

    int max_cube(int a[], int n) {
        int max_val = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] > max_val) {
                max_val = a[i];
            }
        }
        return max_val * max_val * max_val;
    }

    int min_index(int a[], int n) {
        int min_val = a[0];
        int min_index_val = 1;
        for (int i = 2; i <= n; i++) {
            if (a[i - 1] * i < min_val * min_index_val) {
                min_val = a[i - 1];
                min_index_val = i;
            }
        }
        return min_val * min_index_val;
    }

    int min_sum(int a[], int n) {
        int min_val = a[0] + a[1];
        for (int i = 2; i < n; i++) {
            if (a[i - 1] + a[i] < min_val) {
                min_val = a[i - 1] + a[i];
            }
        }
        return min_val;
    }

    int max_product(int a[], int n) {
        int max_val = a[0];
        int prod = a[0];
        for (int i = 1; i < n; i++) {
            prod *= a[i];
            if (prod > max_val) {
                max_val = prod;
            }
            if (a[i] == 0) {
                prod = 1;
            }
        }
        return max_val;
    }

    int count_even(int a[], int n) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                count++;
            }
        }
        return count;
    }

    int count_double_odd(int a[], int n) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1 && a[i] * 2 % 2 == 0) {
                count++;
            }
        }
        return count;
    }

    int count_squares(int a[], int n) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            int root = sqrt(a[i]);
            if (root * root == a[i]) {
                count++;
            }
        }
        return count;
    }

    int count_squares(int a[], int n) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            int root = sqrt(a[i]);
            if (root * root == a[i]) {
                count++;
            }
        }
        return count;
    }

}