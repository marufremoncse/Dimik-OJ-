#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a, b;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a>b){
            cout<<"Invalid!"<<endl;
        }
        else{
            int counter =1;
            int x=a;
            while((a * counter)<=b){
                x = a * counter;
                counter++;
                cout<<x<<endl;
            }
        }
            cout<<endl;
    }

}
