#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int a, b, c;

    for(int i=0;i<n;i++){
        cin>>a>>b>>c;


        long long int max = (a>b)?a:b;
        long long lcm;
        while(1){
            if(max%a==0 && max%b==0)
            {
                lcm = max;
                break;
            }
            max++;
        }

        for(long long int j=lcm;j<=c;j+=lcm){
            cout<<j<<endl;
        }
        if(i!=n-1){
            cout<<endl;
        }
    }

}

