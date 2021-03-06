//
//  string_factory.h
//  C++ Big Integer Library


#ifndef string_factory_h
#define string_factory_h


#endif /* string_factory_h */

#include <cstring>

const int SHORT_INT_RANGE = 1 << 27;
// for faster multiplication & division operations
// the value is chosen that 9 * this < 2^31
// It can be changed due to specific use

int cmp(std::string a, std::string b) {
    int la = (int)a.size();
    int lb = (int)b.size();
    if (la != lb) {
        return la < lb ? -1 : +1;
    }
    for (int i = 0; i < la; i ++) {
        if (a[i] != b[i]) {
            return a[i] < b[i] ? -1 : +1;
        }
    }
    return 0;
}
void insertTrailingZeros(std::string &a, int z) {
    for (int i = 0; i < z; i ++) {
        a += '0';
    }
}
