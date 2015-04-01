//
//  main.cpp
//  MultiplesOf3And5
//
//  Created by Scott Chen on 2/27/15.
//  Copyright (c) 2015 Chen, Scott. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int sum = 0;
    
    for (int i = 3; i < 1000; i += 3)
        sum += i;
    
    for (int j = 5; j < 1000; j += 5) {
        if (j % 3 != 0)
            sum += j;
    }
    
    cout << "Sum is " << sum << endl;
    
    return 0;
}
