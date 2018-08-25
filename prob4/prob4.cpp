#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include <algorithm>
#include <iomanip>

#include "palindrome.h"

std::vector<uint64_t> find_palindromes(uint64_t n) {
    std::vector<uint64_t> res;

    for (size_t i = 0; i <= n; i++) {
        for (size_t j = i; j <= n; j++) {
            uint64_t num = i * j;
            if (is_palindrome(std::to_string(num))) {
                res.push_back(num);
            }
        }
    }
    return res;
}


int main() {
    std::cout << "Enter maximum N : ";
    uint64_t n;
    std::cin >> n;

    clock_t t0 = clock();
    std::vector<uint64_t> res = find_palindromes(n);
    clock_t runtime = clock() - t0;

    for (size_t i = 0; i < res.size(); i++) {
        std::cout << res[i] << "\n";
    }
    std::sort(res.begin(), res.end());
    std::cout << "Solution: " << res.back() << std::endl;
    std::cout << "Total running time: "<< std::fixed << std::setprecision(6) << static_cast<double>(runtime)/CLOCKS_PER_SEC << " seconds" << std::endl;
}
