#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string input;
    for(int i=0;i<n;i++){
        cin>>input;
        stringstream take(input);
        int x;
        take>>x;
        if(x==0){
            cout<<0;
        }

        else{
            if(x<0){
                cout<<"-";
                input = input.substr(1,input.length());
            }
            int count=0;
        for(int j=input.length()-1;j>=0;j--){
            if(input[j]!='0'){
                break;
            }
            count++;
        }
        int count2=0;
        for(int j=0;j<input.length();j++){
            if(input[j]!='0'){
                break;
            }
            count2++;
        }
        for(int j=input.length()-1-count;j>=count2;j--){
            cout<<input[j];
        }
    }
        cout<<endl;
        }

}
