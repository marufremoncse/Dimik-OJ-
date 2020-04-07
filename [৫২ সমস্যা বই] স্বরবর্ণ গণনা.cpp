#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    cin.ignore();
    for(int j=0;j<n;j++){
        string input;
        getline(cin,input);
        int counter = 0;

        for(int i=0;i<input.length();i++){
            if(input[i]=='I' || input[i]=='i' ||
               input[i]=='A' || input[i]=='a' ||
               input[i]=='E' || input[i]=='e' ||
               input[i]=='O' || input[i]=='o' ||
               input[i]=='U' || input[i]=='u'){
                counter++;
               }
        }
        cout<<"Number of vowels = "<<counter<<endl;
    }
}
