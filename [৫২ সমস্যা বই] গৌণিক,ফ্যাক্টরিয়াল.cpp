#include<bits/stdc++.h>
#define MAX 200
using namespace std;

int ara[MAX];

int main()
{
    int n;
    cin>>n;
    int t = 0;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    while(t<n){
        int p = input[t];
        int ara[MAX]={0};
        ara[0] = 1;
        int count = 0;
        for(;p>=2;p--){
            int temp=0;
            for(int j=0;j<=count;j++){
                temp = (ara[j]*p) + temp;
                ara[j] = temp % 10;
                temp = temp / 10;
            }
            while(temp>0){
                ara[++count] = temp % 10;
                temp = temp / 10;
            }
        }
        for(int k=count;k>=0;k--){
            cout<<ara[k];
        }
        cout<<endl;
        t++;
    }
}

