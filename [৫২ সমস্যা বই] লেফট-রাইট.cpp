#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        string input;
        getline(cin,input);

        for(int i=0;i<input.length();i++){
            if(input[i]=='L'){
                input[i] = input[i-1];
            }
            else if(input[i]=='R'){
                input[i] = input[i+1];
            }
        }
        cout<<input<<endl;
    }
}
