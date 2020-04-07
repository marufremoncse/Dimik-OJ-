#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin, input);
    int n;
    cin>>n;

    string output = "";
    for(int i=0;i<input.length();i++){
        if(input[i]!=' '){
            int x = input[i];
            if(x>=65 && x<=90){
                x = (x + n - 65) % 26;
                output += (char)(x+65);
            }
            else if(x>=97 && x<=122){
                x = (x + n - 97) % 26;
                output += (char)(x+97);
            }
        }
        else if(input[i]==' '){
            output +=" ";
        }
    }
    cout<<output<<endl;
}

