#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>my_map;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){

        string input;
        getline(cin,input);
        bool flag = false;
        for(int j=0;j<input.length();j++){
            if(input[j]!=' '){
                flag = true;
            }
            if(input[j]!=' ' && flag==true){
                flag=false;
                if(my_map[input[j]]>=1){
                    my_map[input[j]]++;
                }
                else{
                    my_map[input[j]] = 1;
                }
            }
        }
        map<char,int>::iterator it = my_map.begin();

        while(it != my_map.end()){
            cout<<it->first<<" = "<<it->second<<endl;
            it++;
        }
        if(i!=n-1)
            cout<<endl;

        my_map.clear();
    }
}
