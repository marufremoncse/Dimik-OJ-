
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    for(int i=0;i<n;i++){
        if(input[i]=='A' || input[i]=='B' ||
           input[i]=='C' || input[i]=='D' ||
           input[i]=='E' || input[i]=='F' ||
           input[i]=='G' || input[i]=='H' ||
           input[i]=='I' || input[i]=='J' ||
           input[i]=='K' || input[i]=='L' ||
           input[i]=='M' || input[i]=='N' ||
           input[i]=='O' || input[i]=='P' ||
           input[i]=='Q' || input[i]=='R' ||
           input[i]=='S' || input[i]=='T' ||
           input[i]=='U' || input[i]=='V' ||
           input[i]=='W' || input[i]=='X' ||
           input[i]=='Y' || input[i]=='Z'){
            cout<<"Uppercase Character"<<endl;
           }
           else if(input[i]=='a' || input[i]=='b' ||
           input[i]=='c' || input[i]=='d' ||
           input[i]=='e' || input[i]=='f' ||
           input[i]=='g' || input[i]=='h' ||
           input[i]=='i' || input[i]=='j' ||
           input[i]=='k' || input[i]=='l' ||
           input[i]=='m' || input[i]=='n' ||
           input[i]=='o' || input[i]=='p' ||
           input[i]=='q' || input[i]=='r' ||
           input[i]=='s' || input[i]=='t' ||
           input[i]=='u' || input[i]=='v' ||
           input[i]=='w' || input[i]=='x' ||
           input[i]=='y' || input[i]=='z'){
            cout<<"Lowercase Character"<<endl;
           }
           else if(input[i]=='0' || input[i]=='1' ||
           input[i]=='2' || input[i]=='3' ||
           input[i]=='4' || input[i]=='5' ||
           input[i]=='6' || input[i]=='7' ||
           input[i]=='8' || input[i]=='9'){
            cout<<"Numerical Digit"<<endl;
           }
           else{
            cout<<"Special Character"<<endl;
           }

    }
}
