// Write a C++ program that accepts three inputs: two divisors, a and b, and an upper limit c. The program should find the sum of all natural numbers below the given upper limit c that are multiples of either a or b. For example, if the input is divisors a and b with an upper limit c, the program should return the sum of all multiples of a or b below c.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a , b , c;
    long sum=0;
    cin>>a;
    cin>>b;
    cin>>c;
    
    for(int i=1;i<c;i++){
        if((i%a == 0) || (i%b == 0)){
            sum += i; 
        }
    }
    
    cout<<sum;
    return 0;
}
