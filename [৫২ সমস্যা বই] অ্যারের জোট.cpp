#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a, b;
        cin>>a;
        int ara_one[a];

        for(int j=0;j<a;j++){
            cin>>ara_one[j];
        }

        cin>>b;
        int ara_two[b];

        for(int j=0;j<b;j++){
            cin>>ara_two[j];
        }
        int it_1 = 0 ,it_2 = 0;
        int ara[a+b];

        int k=0;
        while(it_1<a && it_2<b){
            if(ara_one[it_1]<ara_two[it_2]){
                ara[k++] = ara_one[it_1++];
            }
            else{
                ara[k++] = ara_two[it_2++];
            }
        }

        while(it_1<a){
            ara[k++] = ara_one[it_1++];
        }

        while(it_2<b){
            ara[k++] = ara_two[it_2++];
        }
        for(int j=0;j<k;j++){
                if(j==0){
                    cout<<ara[j];
                }
                else{
                    cout<<" "<<ara[j];
                }
        }
        cout<<endl;
    }
}
