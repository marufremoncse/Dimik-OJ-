#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    cin.ignore();

    string ara[T];

    for(int i=0;i<T;i++){
        getline(cin,ara[i]);
    }

    for(int i=0;i<T;i++){
        int count=0;

        for(int j=0;j<ara[i].length();j++){
            if(ara[i][j]!=' '){
                if(ara[i][j-1]==' ' || j==0){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
