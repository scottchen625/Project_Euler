//
//  main.cpp
//  ProjectEulerID2
//
//  Created by Scott Chen on 2/27/15.
//  Copyright (c) 2015 Chen, Scott. All rights reserved.
//

#include <iostream>
using namespace std;

int fibonacci(int);

int main(int argc, const char * argv[]) {
    
    int count = 3;
    int sum = 0;
    
    while (fibonacci(count) < 4000000) {
        sum += fibonacci(count);
        count += 3;  // The fibonacci number is even every third term
    }
    
    cout << "The sum of all even valued fibonacci numbers valued below 4 millions is ";
    cout << sum << endl;
    
    cout << "The 6th fibonacci is " << fibonacci(6) << endl;
    
    return 0;
}

/*
 * Return: the nth fibonacci number
 */
int fibonacci(int n) {
    if (n == 1) return 1;
    else if (n == 2) return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}