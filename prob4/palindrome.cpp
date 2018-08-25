#include <string>

bool is_palindrome(std::string s) {
    size_t j = static_cast<size_t>(s.size()) - 1;
    bool res = true;
    for (size_t i = 0; i <= j; i++) {
        if (s[i] != s[j]) {
            res = false;
            break;
        }
        j--;
    }
    return res;
}
