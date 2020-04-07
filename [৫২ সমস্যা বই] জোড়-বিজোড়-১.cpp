#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    for(int i=0;i<n;i++){
        if(ara[i]%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }
}
