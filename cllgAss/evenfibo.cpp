// Given a positive integer n, calculate the sum of all even Fibonacci numbers less than or equal to n.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n , a=1 , b=2 , sum=0;
    cin>>n;
    while(b<=n){
        if(b%2 == 0){
            sum += b;
        }
        int next = a+b;
        a = b;
        b =next;
    }
    cout<<sum;
    return 0;
}


