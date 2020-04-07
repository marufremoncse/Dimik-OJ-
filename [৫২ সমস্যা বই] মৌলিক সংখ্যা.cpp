#include<bits/stdc++.h>
using namespace std;

int is_prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int count=0;
        int a, b;

        cin>>a>>b;

        for(int j=a;j<=b;j++){
            if(is_prime(j)==1){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
