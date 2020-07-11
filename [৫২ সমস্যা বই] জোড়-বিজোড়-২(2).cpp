#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    string ara[T];

    for(int i=0;i<T;i++){
        cin>>ara[i];
    }

    for(int i=0;i<T;i++){
        string input = ara[i].substr(ara[i].length()-1,1);
        int x = stoi(input);

        if(x%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
}
