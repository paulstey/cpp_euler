// Sum of Even Fibonacci Numbers
// This program takes the sum of even Fibonacci
// numbers less than sum specified value
// Author: Paul Stey
// Date: 2017-03-25

#include <iostream>
#include <algorithm>    // std::swap()
#include <ctime>
#include <cstdint>
#include <iomanip>      // std::fixed and std::setprecision()

#include "utils.h"


int main() {
    int n = get_input();

    clock_t t0 = clock();
    uint64_t res = sum_even_fib(n);
    clock_t runtime = clock() - t0;

    std::cout << res << std::endl;
    std::cout << "Total running time: "<< std::fixed << std::setprecision(6) << static_cast<double>(runtime)/CLOCKS_PER_SEC << " seconds" << std::endl;
}
