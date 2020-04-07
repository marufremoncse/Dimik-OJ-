#include<bits/stdc++.h>
#define MAX 1000000000001
using namespace std;

int is_prime(long long int n){
    if(n<=1){
        return 0;
    }
    for(long long int i=2;i*i<=n;i++){
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
        long long int p;
        cin>>p;
        if(is_prime(p)==1){
            cout<<p<<" is a prime"<<endl;
        }
        else{
            cout<<p<<" is not a prime"<<endl;
        }
    }
}
