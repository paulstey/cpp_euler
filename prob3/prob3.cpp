#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
#include <ctime>

#include "primes.h"

const uint64_t TARGET = 600851475143;
// const uint64_t TARGET = 13195;


uint64_t max_prime_factor(std::vector<uint64_t> prime_vec, uint64_t m) {
    int n = prime_vec.size() - 1;

    uint64_t res = 1;

    for (size_t i = n; i > 0; i--) {
        if (prime_vec[i] > m) {
            continue;
        }
        else {
            if (m % prime_vec[i] == 0) {
                res = prime_vec[i];
                break;
            }
        }
    }
    return res;
}




int main() {
    uint64_t max_try = static_cast<uint64_t>(std::sqrt(TARGET));
    std::vector<uint64_t> primes_vec = primes(max_try);


    // Time execution of our function
    clock_t t0 = clock();
    uint64_t res = max_prime_factor(primes_vec, TARGET);
    clock_t runtime = clock() - t0;

    double n_seconds = static_cast<double>(runtime)/CLOCKS_PER_SEC;

    std::cout << res << "\n";
    std::cout << "Run time: "<< n_seconds << " sec." << "\n";

}
