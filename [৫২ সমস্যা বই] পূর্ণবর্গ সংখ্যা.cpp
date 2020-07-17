#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    int ara[T];

    for(int i=0;i<T;i++){
        cin>>ara[i];
    }

    for(int i=0;i<T;i++){
        if(floor(sqrt(ara[i]))==ceil(sqrt(ara[i]))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
