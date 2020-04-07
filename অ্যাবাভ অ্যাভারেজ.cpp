#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        double ara[n];
        double sum = 0.0;
        for(int j=0;j<n;j++){
            cin>>ara[j];
            sum+=ara[j];
        }
        double avg = sum / n;

        int count=0;
        for(int j=0;j<n;j++){
            if(ara[j]>avg){
                count++;
            }
        }
        printf("%.3f",(count*100.0)/n);
        cout<<"%"<<endl;
    }
}
