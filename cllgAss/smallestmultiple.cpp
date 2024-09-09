// The smallest multiple of a set of numbers is the least common multiple (LCM) of those numbers.Given an integer n, find the smallest positive number that is evenly divisible by all the numbers from 1 to n. Hint : lcm(a,b)=(|a dot b|)/(gcd(a,b)) ; where GCD is greatest common divisor.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int n;
    cin >> n;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = lcm(result, i);
    }
    cout << result << endl;
    return 0;
}



