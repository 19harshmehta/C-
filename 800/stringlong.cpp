#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();
    string arr[n];
    for(int i=0 ; i<n;i++){
        getline(cin,arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i].length() > 10){
            cout<<arr[i][0]<<arr[i].length()-2<<arr[i][arr[i].length()-1]<<endl;
        }else{
            cout<<arr[i]<<endl;
        }
    }

    
    return 0;
}