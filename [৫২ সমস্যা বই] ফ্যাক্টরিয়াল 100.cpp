#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t = 0;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    for(int i=0;i<n;i++){
        int t = input[i];
        int ans = 0;
        while(t>=5){
            ans = ans + t / 5;
            t /= 5;
        }
        cout<<ans<<endl;
    }
}
