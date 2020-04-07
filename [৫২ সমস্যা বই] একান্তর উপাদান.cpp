#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int j=0;j<n;j++){
        int p;
        cin>>p;
        int ara[p];

        for(int i=0;i<p;i++){
            cin>>ara[i];
        }
        for(int i=0;i<p;i+=2){

            cout<<ara[i];
            if(i!=p-1 && i!=p-2){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
