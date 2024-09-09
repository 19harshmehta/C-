#include<iostream>
using namespace std;

int main(){

    int num,X=0;
    cin>>num;
    string arr[num];

    for(int i=0;i<num;i++){
        cin>>arr[i];
        if(arr[i] == "X++" || arr[i] == "++X" ||arr[i] == "X--" ||arr[i] == "--X" )
        {
            if(arr[i]=="X++")
                X++;
            else if(arr[i]=="++X")
                ++X;
            else if(arr[i]=="--X")
                --X;
            else
                X--;
        }
    }
    cout<<X;

    return 0;
}