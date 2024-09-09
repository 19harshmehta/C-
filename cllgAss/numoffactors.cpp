// Given a positive integer n, return the total number of factors of n. For example, the number 12 has six divisors: 1, 2, 3, 4, 6, and 12. Your task is to determine the number of factors of a given integer n.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,count = 0;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        if(n % i == 0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
