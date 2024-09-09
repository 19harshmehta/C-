#include <iostream>
using namespace std;
int main ()
{
    int num,sum,ans,arr[4],i;
    cin>>num;
    
        sum=0;
        while (num--)
        {
            ans=0;
            for (i=0;i<3;i++)
            {
                cin>>arr[i];
                if (arr[i]==1)
                    ans++;
            }
            if (ans>=2)
                sum++;
        }
        cout<<sum<<endl;
    
    return 0;
}