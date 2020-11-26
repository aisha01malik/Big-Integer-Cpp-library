//
//  main.cpp
//  C++ Big Integer Library


#include <iostream>
#include <cstring>
#include <vector>
#include <ctime>

#include "integer.h"
#include "extra_integer_factory.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Integer a = 96;
    cout << isFermatPrime(a) << endl;
    cout << smallPrimesCheck(a) << endl;
    cout << isEulerPrime(a) << endl;
    cout << isMillerRabinPrime(a) << endl;
    
    
    return 0;
}
