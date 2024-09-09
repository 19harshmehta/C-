// Given an integer n, calculate the total number of letters used when all numbers from 1 to n are written in words (ignoring spaces and hyphens). For example, the numbers from 1 to 5 are written as "one", "two", "three", "four", "five", and there are 19 letters used in total. Your task is to calculate the total number of letters used to write all numbers from 1 to n in words.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<string> one = {"","one","two","three","four","five","six","seven","eight","nine"};
    vector<string> teen ={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    vector<string> tens = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string hundred = "hundred";
    string thousand = "onethousand";
    int total = 0;
    
    for(int i=1 ; i<=n ; i++){
        if(i>=1 && i<=9){
            total += one[i].size();
        }else if(i>=10 && i<=19){
            total += teen[i - 10].size();    
        }else if(i>=20 && i<=99){
            total += tens[i/10].size() + one[i%10].size();
        }else if (i == 100) { // 100
            total += one[i / 100].size() + hundred.size();
        }
    }
    cout<<total;
    return 0;
}


