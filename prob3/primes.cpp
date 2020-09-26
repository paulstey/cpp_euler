#include <vector>
#include <cstdint>


std::vector<uint64_t> primes(int n) {
    std::vector<bool> prime_flag (n+1, true);

    // Cross out non-primes by removing all multiples
    // of our existing primes. The incrementing of the
    // loop index `j` in the nested loop is the key.
    for (size_t i = 2; i*i <= n; i++) {
    	if (prime_flag[i] == true) {
            for (size_t j = i*2; j <= n; j += i) {
                prime_flag[j] = false;
            }
        }
    }

    // collect the non-crossed out integers (i.e., primes)
    std::vector<uint64_t> res;
    for (uint64_t i = 2; i <= n; i++) {
    	if (prime_flag[i] == true) {
    	    res.push_back(i);
    	}
    }
    return res;
}
