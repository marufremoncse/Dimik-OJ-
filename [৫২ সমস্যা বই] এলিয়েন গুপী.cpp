#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        double input;
        cin>>input;

        int count=0;
        do{
            input/=2;
            count++;
        }while(input>1.0);

        cout<<count<<" days"<<endl;
    }
}
