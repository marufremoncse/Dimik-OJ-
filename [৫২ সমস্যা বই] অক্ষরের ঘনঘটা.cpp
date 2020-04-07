#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
            cin.ignore();
        int count=0;
        string input;
        char ch;
        getline(cin,input);
        cin>>ch;
        for(int j=0;j<input.length();j++){
            if(input[j]==ch)
                count++;
        }
        if(count!=0){
            cout<<"Occurrence of \'"<<ch<<"\' in "<<"\'"<<input<<"\' = "<< count<<endl;
        }
        else{
            cout<<"\'"<<ch<<"\' is not present"<<endl;
        }
    }
}
