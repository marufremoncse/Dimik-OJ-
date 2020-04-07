#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double ara[n][3];

    for(int i=0;i<n;i++){
        cin>>ara[i][0]>>ara[i][1]>>ara[i][2];
    }
    for(int i=0;i<n;i++){
        double curr = (ara[i][1]*6)/(300-ara[i][2]);
        printf("%.2f",curr);
        double requ;
        if(ara[i][0]<ara[i][1])
            requ=0.00;
        else{
            requ = ((ara[i][0]-ara[i][1]+1)*6)/(ara[i][2]);
        }
        printf(" %.2f\n",requ);
    }
}
