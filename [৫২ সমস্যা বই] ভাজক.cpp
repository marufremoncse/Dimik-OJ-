#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, x;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Case "<<i+1<<":";
        for(int j=1;j<=ara[i];j++){
            if(ara[i]%j==0){
                cout<<" "<<j;
            }
        }
        cout<<endl;
    }
}
