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
        int count=0;
        for(int i=0;i<input.length();i++){

            if(input[i]!=' '){
                store+=input[i];
            }
            if((i+1==input.length() && store!="") || (input[i]==' ' && store!="")){
                count++;
                store="";
            }
        }
        cout<<"Count = "<<count<<endl;
    }
}
