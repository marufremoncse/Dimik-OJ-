#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    for(int i=0;i<n;i++){
        double a = floor(sqrt(ara[i]));
        double b = ceil(sqrt(ara[i]));
        if(a==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
