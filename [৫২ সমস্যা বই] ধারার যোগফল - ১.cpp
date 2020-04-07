#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x, k;
        cin>>x>>k;
        long long int sum = 0;

        for(int j=0;j<=k;j++){
            sum+=ceil(pow(x,j));
        }
        cout<<"Result = "<<sum<<endl;
    }
}
