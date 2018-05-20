#include <iostream>

bool is_case(int n) {
    bool res = false;

    if (n % 3 == 0) {
        res = true;
    }
    else if (n % 5 == 0) {
        res = true;
    }
    return res;
}


int get_maxval() {
    int res;
    std::cout << "Enter maxval: " << std::endl;
    std::cin >> res;
    return res;
}
