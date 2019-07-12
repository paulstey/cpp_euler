#include <iostream>
#include <vector>

#include "factors.h"

int main() {
    // std::vector<uint64_t> res = factors(2520);
    // int n = res.size();
    // for (size_t i = 0; i < n; i++) {
    //     std::cout << res[i] << ", ";
    // }
    // std::cout << "\n" << std::endl;

    std::vector<uint64_t> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << has_factors(v, 2520) << std::endl;
}