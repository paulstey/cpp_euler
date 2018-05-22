#include <algorithm>
#include <iostream>

bool is_even(int n) {
    bool res = false;
    if (n % 2 == 0) {
	res = true;
    }
    return res;
}


long long sum_even_fib(int n) {
    long long a;
    long long b;
    long long tmp;
    a = 1;
    b = 1;
    long long runsum = 0;
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
