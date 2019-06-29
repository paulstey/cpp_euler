// Project Euler: Problem 1
// Take sum of all integers that are multiples of 3 or 5
// Date: 2017-03-11
// Author: Paul Stey

#include <iostream>
#include "utils.h"


int main() {
    int res = 0;
    int maxval = get_maxval();

    for (int i = 3; i < maxval; ++i) {
    	if (is_case(i)) {
    	    res += i;
    	}
    }
    std::cout << "Solution: " << res << std::endl;
}
