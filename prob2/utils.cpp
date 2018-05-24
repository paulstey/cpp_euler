#include <algorithm>
#include <iostream>
#include <cstdint>

bool is_even(int n) {
    bool res = false;
    if (n % 2 == 0) {
	res = true;
    }
    return res;
}


uint64_t sum_even_fib(int n) {
    uint64_t a;
    uint64_t b;
    uint64_t tmp;
    a = 1;
    b = 1;
    uint64_t runsum = 0;
    for (size_t i = 3; b <= n; i++) {
        tmp = b;
        b = a + b;

    	std::swap(a, tmp);
    	if (is_even(b)) {
    	    //std::cout << runsum << std::endl;
    	    runsum += b;
    	}
    }
    return runsum;
}


int get_input() {
    int n;
    std::cout << "Max Fibonacci number: ";
    std::cin >> n;
    return n;
}
