#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string input;
        getline(cin,input);

        int flag = true;
        int length = input.length();
        if(length%2==1){
            length--;
        }
        for(int j=0;j<length;j++){
            if(input[j]!=input[input.length()-1-j]){
                flag = false;
            }
        }
        if(flag){
            cout<<"Yes! It is Palindrome!"<<endl;
        }
        else{
            cout<<"Sorry! It is not Palindrome!"<<endl;
        }
    }
}




