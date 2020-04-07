#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    for(int i=0;i<n;i++){
        stringstream input(ara[i].substr(ara[i].length()-1,1));
        int x;
        input>>x;
        if(x%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }
    string str = "10";
}

