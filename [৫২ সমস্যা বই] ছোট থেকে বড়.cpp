#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    int ara[T][3];

    for(int i=0;i<T;i++){
        cin>>ara[i][0]>>ara[i][1]>>ara[i][2];
    }

    for(int i=0;i<T;i++){
        sort(ara[i],ara[i]+3);
        cout<<"Case "<<i+1<<": "<<ara[i][0]<<" "<<ara[i][1]<<" "<<ara[i][2]<<endl;
    }
}
