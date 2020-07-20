#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    int ara[T];

    for(int i=0;i<T;i++){
        cin>>ara[i];
    }

    long long output;
    for(int i=0;i<T;i++){
        output = 1;

        for(int j=1;j<=ara[i];j++){
            output = output * j;
        }
        cout<<output<<endl;
    }
}
