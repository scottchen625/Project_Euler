//
//  main.cpp
//  ProjectEulerID3
//
//  Created by Scott Chen on 3/5/15.
//  Copyright (c) 2015 Chen, Scott. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool isPrime(long);
long largestPrimeFactor(long);
long wrapper(long);

int main(int argc, const char * argv[]) {
    
    long target = 13195;
    
    cout << "max prime divisor is " << wrapper(target) << endl;
    
    return 0;
}

bool isPrime(long n) {
    for (long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

long largestPrimeFactor(long n) {
    if (n <= 2)
        return n;
    for (long i = 2; i < n / 2; i++) {
        if (n % i == 0 && isPrime(i))
            return largestPrimeFactor(max(i, n / i));
    }
    return n;
}

long wrapper(long n) {
    if (isPrime(n))
        return n;
    else
        return largestPrimeFactor(n);
}

