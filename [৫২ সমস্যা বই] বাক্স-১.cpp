#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, j, k;
    cin>>n;
    int ara[n];

    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    for(int i=0;i<n;i++){
        for(j=0;j<ara[i];j++){
            for(k=0;k<ara[i];k++){
                cout<<"*";
            }
            cout<<endl;
        }
        if(i<n-1){
            cout<<endl;
        }

    }
}

