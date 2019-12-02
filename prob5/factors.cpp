#include <vector>

std::vector<uint64_t> factors(uint64_t n) {
    
    size_t half_n = n/2;
    std::vector<uint64_t> res;

    for (size_t i = 1; i < half_n; i++) {
        if (n % i == 0) {
            res.push_back(i);
        }
    }
    return res;
}


bool has_factors(std::vector<uint64_t> facts, uint64_t n) {
    for (auto& x : facts) {
        if (n % x != 0) {
            return false;
        }
    }    
    return true;
}
