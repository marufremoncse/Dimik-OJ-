#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;


    for(int i=0;i<n;i++){
        string input, test;
        cin>>input>>test;

        for(int i=0;i<(input.length()-test.length()+1);i++){
            if(input.substr(i,test.length())==test){
                cout<<i<<endl;
                break;
            }
        }
    }
}
