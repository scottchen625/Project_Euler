//
//  main.cpp
//  ProjectEulerID10
//
//  Created by Scott Chen on 3/6/15.
//  Copyright (c) 2015 Chen, Scott. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long);
long sumOfPrimes(long);


int main(int argc, const char * argv[]) {
    
    cout << "Checking isPrime " << isPrime(17) << endl;
    
    long target = 2000000;
    
    cout << "Sum of primes below " << target << " is: " << sumOfPrimes(target) << endl;
    
    return 0;
}

bool isPrime(long n) {
    for (long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

long sumOfPrimes(long n) {
    long sum = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i))
            sum += i;
    }
    return sum;
}