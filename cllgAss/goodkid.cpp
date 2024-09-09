// Slavic is preparing a present for a friend's birthday. He has an array a of n digits and the present will be the product of all these digits. Because Slavic is a good kid who wants to make the biggest product possible, he wants to add 1 to exactly one of his digits.

// What is the maximum product Slavic can make?

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
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }    

    long long originalProduct = 1;
    bool non_zero = false;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            originalProduct *= a[i];
            non_zero = true;
        }
    }
    if (!non_zero) {
        cout << 1;
        return 0;
    }

    long long maxProduct = originalProduct;
    for(int i = 0; i < n; i++){
        long long newProduct;
        if(a[i] == 0) {
            newProduct = originalProduct * (a[i]+1);
            break;
        } else {
            newProduct = (originalProduct / a[i]) * (a[i] + 1);
        }
        if(newProduct > maxProduct){
            maxProduct = newProduct;
        }
    }
    cout << maxProduct;
    return 0;
}
