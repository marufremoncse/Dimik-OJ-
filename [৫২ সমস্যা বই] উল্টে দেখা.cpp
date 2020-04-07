#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    cin.ignore();
    for(int j=0;j<n;j++){

        string input;
        getline(cin,input);

        for(int i=input.length()-1;i>=0;i--){
            cout<<input[i];
        }
        cout<<endl;
    }
}

