#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    bool flag = true;
    if(n<2){
        cout<<"YES"<<endl;
    }
    else{
        int diff = ara[1] - ara[0];
        if(diff>=0){
            for(int i=0;i<n-1;i++){
                if((ara[i+1]-ara[i])<0){
                    flag = false;
                    break;
                }
            }
        }
        else if(diff<0){
            for(int i=0;i<n-1;i++){
                if((ara[i+1]-ara[i])>0){
                    flag = false;
                    break;
                }
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
