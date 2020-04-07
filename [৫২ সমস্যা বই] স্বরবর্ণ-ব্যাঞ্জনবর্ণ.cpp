#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    cin.ignore();

    for(int j=0;j<n;j++){

        string input;
        getline(cin,input);

        string shoroborno = "";
        string byanjonborno = "";

        for(int i=0;i<input.length();i++){
            if(input[i]=='I' || input[i]=='i' ||
               input[i]=='A' || input[i]=='a' ||
               input[i]=='E' || input[i]=='e' ||
               input[i]=='O' || input[i]=='o' ||
               input[i]=='U' || input[i]=='u'){
                shoroborno += input[i];
               }
            else if(input[i]=='B' || input[i]=='b' ||
               input[i]=='C' || input[i]=='c' ||
               input[i]=='D' || input[i]=='d' ||
               input[i]=='F' || input[i]=='f' ||
               input[i]=='G' || input[i]=='g' ||
               input[i]=='H' || input[i]=='h' ||
               input[i]=='J' || input[i]=='j' ||
               input[i]=='K' || input[i]=='k' ||
               input[i]=='L' || input[i]=='l' ||
               input[i]=='M' || input[i]=='m' ||
               input[i]=='N' || input[i]=='n' ||
               input[i]=='P' || input[i]=='p' ||
               input[i]=='Q' || input[i]=='q' ||
               input[i]=='R' || input[i]=='r' ||
               input[i]=='S' || input[i]=='s' ||
               input[i]=='T' || input[i]=='t' ||
               input[i]=='V' || input[i]=='v' ||
               input[i]=='W' || input[i]=='w' ||
               input[i]=='X' || input[i]=='x' ||
               input[i]=='Y' || input[i]=='y' ||
               input[i]=='Z' || input[i]=='z'){
                byanjonborno += input[i];
            }
        }
        cout<<shoroborno<<endl;
        cout<<byanjonborno<<endl;
    }
}
