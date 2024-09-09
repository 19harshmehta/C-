// Given a positive integer n consisting of multiple digits, calculate the sum of the factorials of each digit in n.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long a,tmp,sum = 0,f = 1,digit;
    cin>>a;
    a = abs(a);
    tmp = a;
    while(tmp>0){
        digit = tmp % 10;
        for(int i = 1; i<=digit; ++i){
            f *= i;
        }
        sum += f;
        f = 1;
        tmp /= 10;
    }
    cout<<sum;
    return 0;
}