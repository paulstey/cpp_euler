#include <iostream>
#include <vector>

#include "factors.h"

int main() {
    std::vector<uint64_t> res = factors(2520);
    int n = res.size();
    for (size_t i = 0; i < n; i++) {
        std::cout << res[i] << ", ";
    }
    std::cout << "\n" << std::endl;
}