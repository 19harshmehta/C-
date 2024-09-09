// Given a positive integer n, determine whether it is a circular prime. A circular prime is a number that remains prime after all rotations of its digits.For example, 197 is a circular prime because all rotations of its digits (197, 971, and 719) are also prime. If the number is a circular prime, output "Yes". Otherwise, output "No".

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int rotate(int num, int len) {
    int rem = num % 10;
    num = num / 10;
    return rem * pow(10, len - 1) + num;
}

int main() {
    int n;
    cin >> n;
    int len = 0, temp = n;
    while (temp > 0) {
        len++;
        temp /= 10;
    }
    int chnaged = n;
    for (int i = 0; i < len; i++) {
        if (!isPrime(chnaged)) {
            cout << "No";
            return 0;
        }
        chnaged = rotate(chnaged, len);
    }
    cout << "Yes";
    return 0;
}



