#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        for(int j=n;j>=0;j--){
            if(j>=2){
                cout<<"2^"<<j<<" + ";
            }
            else if(j==1){
                cout<<"2"<<" + ";
            }
            else{
                cout<<1<<endl;
            }
        }
    }
}

