#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n][3];
    for(int i=0;i<n;i++){
        cin>>ara[i][0]>>ara[i][1]>>ara[i][2];
    }
    for(int i=0;i<n;i++){
        sort(ara[i],ara[i]+3);
        cout<<"Case "<<i+1<<": "<<ara[i][0]<<" "<<ara[i][1]<<" "<<ara[i][2]<<endl;
    }
}
