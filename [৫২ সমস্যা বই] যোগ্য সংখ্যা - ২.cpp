
#include<bits/stdc++.h>
using namespace std;

int main(){
    string ara[8]={"6","28","496","8128","33550336","8589869056","137438691328","2305843008139952128"};

    int n;
    cin>>n;
    int input;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        int flag = 0;
        for(int j=0;j<8;j++){
            stringstream take(ara[j]);
            long long x = 0;
            take>>x;
            if(input>=x){
                cout<<x<<endl;
            }
        }
        if(i!=n-1)
            cout<<endl;
    }
}
