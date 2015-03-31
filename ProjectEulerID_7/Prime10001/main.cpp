//
//  main.cpp
//  Prime10001
//
//  Created by Scott Chen on 2/27/15.
//  Copyright (c) 2015 Chen, Scott. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    bool isPrime(int);
    
    int count = 1;
    int number = 2;
    while (count < 10002) // if we want the nth prime, then count < (n+1)
    {
        if (isPrime(number))
            count++;
        if (count != 10002)  // If count is over the desired n, don't increment number
            number++;
    }
    
    std::cout << "Number is " << number << std::endl;
    
    return 0;
}

bool isPrime(int n)
{
    for (int i = 2; i < n / 2 + 1; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}