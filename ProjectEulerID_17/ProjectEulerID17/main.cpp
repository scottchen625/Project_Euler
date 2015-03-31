//
//  main.cpp
//  ProjectEulerID17
//
//  Created by Scott Chen on 3/13/15.
//  Copyright (c) 2015 Chen, Scott. All rights reserved.

#include <iostream>

using namespace std;

int sumOfOneNumber(int);
int oneThrough19(int);
int tens(int);
int hundreds(int);
int thousands(int);

int main(int argc, const char * argv[]) {
    
    // Testing oneThrough19
    cout << "6 is " << oneThrough19(6) << endl;
    cout << "19 is " << oneThrough19(19) << endl;
    
    // Testing tens and sumOfOneNumer
    cout << "21 is (twenty one) " << sumOfOneNumber(21) << endl;
    cout << "63 is (sixty three) " << sumOfOneNumber(63) << endl;
    cout << "97 is (ninety seven - 11) " << sumOfOneNumber(97) << endl;
    cout << "98 is (ninety eight - 11)" << sumOfOneNumber(98) << endl;
    cout << "99 is (ninety nine - 10) " << sumOfOneNumber(99) << endl;
    
    // Testing hundreds and sumOfOneNumer
    cout << "100 is (one hundred - 10) " << sumOfOneNumber(100) << endl;
    cout << "101 is (one hundred and one - 16) " << sumOfOneNumber(101) << endl;
    cout << "101 is (one hundred and fifteen - 20) " << sumOfOneNumber(115) << endl;
    cout << "200 is (two hundred - 10) " << sumOfOneNumber(200) << endl;
    cout << "300 is (three hundred - 12) " << sumOfOneNumber(300) << endl;
    cout << "222 is (two hundred and twenty two - 22) " << sumOfOneNumber(222) << endl;
    cout << "319 is (three hundred and nineteen - 23) " << sumOfOneNumber(319) << endl;
    cout << "342 is (three hundred and fortytwo - 23) " << sumOfOneNumber(342) << endl;
    cout << "517 is (five hundred and seventeen - 23) " << sumOfOneNumber(517) << endl;
    cout << "901 is (nine hundred and one - 17) " << sumOfOneNumber(901) << endl;
    cout << "999 is (nine hundred and ninety nine - 24) " << sumOfOneNumber(999) << endl;
    
    // Testing thousands and sumOfOneNumer
    cout << "1000 is (one thousand - 11) " << sumOfOneNumber(1000) << endl;
    
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum += sumOfOneNumber(i);
    }
    
    int sumOf99 = 0;
    for (int j = 1; j < 100; j += 1) {
        sumOf99 += sumOfOneNumber(j);
    }
    cout << "sum of 99 is " << sumOf99 << endl;
    
    cout << "\n\nSum is " << sum << endl;
    
    return 0;
}

int sumOfOneNumber(int n)
{
    if (n < 20)
        return oneThrough19(n);
    if (n < 100)
        return tens(n / 10) + oneThrough19(n % 10);
    if (n % 100 == 0 && n <= 999)
        return oneThrough19(n/100) + 7;
    // 3 digit nums whose last two digits are in the teens
    if (n <= 999 && n % 100 <= 19)
        return hundreds(n / 100) + oneThrough19(n % 100);
    if (n <= 999)
        return hundreds(n / 100) + tens((n / 10) % 10) + oneThrough19(n % 10);
    else
        return thousands(1);
}

int oneThrough19(int n) {
    if (n == 1) // one
        return 3;
    if (n == 2) // two
        return 3;
    if (n == 3) // three
        return 5;
    if (n == 4) // four
        return 4;
    if (n == 5) // five
        return 4;
    if (n == 6) // six
        return 3;
    if (n == 7) // seven
        return 5;
    if (n == 8) // eight
        return 5;
    if (n == 9) // nine
        return 4;
    if (n == 10) // ten
        return 3;
    if (n == 11) // eleven
        return 6;
    if (n == 12) // twelve
        return 6;
    if (n == 13) // thirteen
        return 8;
    if (n == 14) // fourteen
        return 8;
    if (n == 15) // fifteen
        return 7;
    if (n == 16) // sixteen
        return 7;
    if (n == 17) // seventeen
        return 9;
    if (n == 18) // eighteen
        return 8;
    if (n == 19) // nineteen
        return 8;
    return 0;
}

int tens(int n) {
    if (n == 2) // twenty
        return 6;
    if (n == 3) // thirty
        return 6;
    if (n == 4) // forty
        return 5;
    if (n == 5) // fifty
        return 5;
    if (n == 6) // sixty
        return 5;
    if (n == 7) // seventy
        return 7;
    if (n == 8) // eighty
        return 6;
    if (n == 9) // ninety
        return 6;
    return 0;
}

int hundreds(int n) {
    // n hundred and ...
    return oneThrough19(n) + 10;
}

int thousands(int n) {
    // n thousand and ...
    return oneThrough19(n) + 8;
}