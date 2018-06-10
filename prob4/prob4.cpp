#include <string>
#include <vector>

uint64_t find_palindromes(uint64_t max_prod) {
    std::vector<bool> mask;
    uint64_t n = max_prod * max_prod;
    uint64_t idx;
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            mask[idx] = is_palindrome(std::to_string(i * j))
            idx++;
        }
    }
}
