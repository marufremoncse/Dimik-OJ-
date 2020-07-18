#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    double ara[T][3];

    for(int i=0;i<T;i++){
        cin>>ara[i][0]>>ara[i][1]>>ara[i][2];
    }

    double current_run_rate, required_run_rate;
    for(int i=0;i<T;i++){
        current_run_rate = ara[i][1]/((300-ara[i][2])/6);

        if(ara[i][0]<ara[i][1]){
            required_run_rate = 0;
        }
        else{
            required_run_rate = (ara[i][0]-ara[i][1]+1)/(ara[i][2]/6);
        }
        printf("%.2f %.2f\n",current_run_rate,required_run_rate);
    }
}
