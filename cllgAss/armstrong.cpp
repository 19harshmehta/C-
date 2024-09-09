#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;

    int ogNum = n , sum = 0 , numDigits = 0;
    int temp = n;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    if (sum == ogNum) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
