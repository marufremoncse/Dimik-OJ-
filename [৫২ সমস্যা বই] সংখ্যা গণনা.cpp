#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string ara[n];

    char ch;
    cin>>ch;

    for(int i=0;i<n;i++){
        getline(cin,ara[i]);
    }

    for(int i=0;i<n;i++){
        int count=0;
        char var;
        for(int j=0; j<ara[i].length();j++){
            if(ara[i][j]!=' '){
                if(var!='n'){
                    var = 'n';
                    count++;
                }
            }
            else if(ara[i][j]==' '){
                if(var!='s'){
                    var = 's';
                }
            }
        }
        cout<<++count<<endl;
    }
}


