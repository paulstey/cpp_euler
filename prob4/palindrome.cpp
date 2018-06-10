#include <string>

bool is_palindrome(std::string s) {
    uint64_t n = static_cast<uint64_t>(s.size())
    uint64_t i = 0;
    bool persist = true;
    bool res = false;
    while (persist) {
        persist = s[i] == s[n];
        if (persist && i == j) {
            res = true;
            break
        }
        i++;
        n--;
    }
    return res;
}
