#include<bits/stdc++.h>
using namespace std;

double fact(double n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        double n;
        cin>>n;
        double sum = 0;

        for(double j=1;j<=n;j++){
            sum+=(1/fact(j-1));
        }
        printf("%.4f\n",sum);
    }
}
