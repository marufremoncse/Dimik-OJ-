#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int p;
    cin>>p;

    for(long long int i=0;i<p;i++){
        long long int n, m;
        cin>>n>>m;
        for(long long int j=0;j<n;j++){
            for(long long int k=0;k<=j;k++){
                if(k==j){
                    cout<<m;
                }
                else{
                    cout<<m<<" ";
                }
            }
            cout<<endl;
        }
        for(long long int j=n-1;j>0;j--){
            for(long long int k=0;k<j;k++){
                if(k==j-1){
                    cout<<m;
                }
                else{
                    cout<<m<<" ";
                }
            }
                cout<<endl;
        }
            cout<<endl;

    }
}



