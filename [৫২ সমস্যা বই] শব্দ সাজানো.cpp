#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int>my_map;
    cin.ignore();
    for(int i=0;i<n;i++){
        string input;
        getline(cin,input);
        if(my_map[input]>=0){
           my_map[input]++;
        }
    }
    map<string,int>::iterator it = my_map.begin();

    while(it!=my_map.end()){
        for(int i=0;i<it->second;i++){
            cout<<it->first<<endl;
        }
        it++;
    }
}


