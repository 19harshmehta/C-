// Given a positive integers a & n, calculate the sum of the digits of the number a^n (a raised to the power of n).
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long l, m,power = 1,sum=0,temp;
    cin >> l >> m;
    for(long i = 0; i < m; ++i) {
        power *= l;
    }
    power = abs(power);
    temp = power;
    while(temp>0){
        sum += temp % 10;
        temp /= 10;
    }
    cout<<sum;
    return 0;
}