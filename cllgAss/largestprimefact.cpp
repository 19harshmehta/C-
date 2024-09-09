// Write a C++ program that finds the largest prime factor of a given positive integer n.

// A prime factor of a number n is a prime number that divides n without leaving a remainder. The task is to identify the largest prime number that divides n exactly.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int largestFactor = 1;
    long n;
    cin>>n;
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

    if (n > 2) {
        largestFactor = n;
    }

    cout<<largestFactor;
    return 0;
}
