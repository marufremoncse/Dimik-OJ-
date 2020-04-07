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

        string store = "";
        for(int i=0;i<input.length();i++){

            if(input[i]!=' '){
                store+=input[i];
            }
            if((i+1==input.length() && store!="") || (input[i]==' ' && store!="")){
                for(int k=store.length()-1;k>=0;k--){
                    cout<<store[k];
                }
                store="";
                if(input[i]==' ')
                    cout<<' ';
            }
            else if(input[i]==' ')
                cout<<' ';
        }
        cout<<endl;
    }
}
