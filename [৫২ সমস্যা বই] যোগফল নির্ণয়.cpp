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
    int sum=0;
    for(int i=0;i<n;i++){
        cout<<"Sum = "<<ara[i]/10000 + ara[i]%10<<endl;
    }
}

