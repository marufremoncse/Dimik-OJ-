#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long int>my_vec;
    int m, n;
    cin>>m>>n;
    cin.ignore();
    map<string, int>my_map;

    for(int i=0;i<m;i++){
        string input;
        int integer;
        cin>>input;
        cin>>integer;
        my_map[input] = integer;
    }
    while(n--){
        long long int sum=0;
        string big_string="";
        string min_string="";
        while(getline(cin,min_string)){
            big_string+=min_string + " ";
            if(min_string[min_string.length()-1]=='.'){
                break;
            }
        }
        string store = "";
        for(int j=0;j<big_string.length();j++){
            if(big_string[j]!=' '){
                store+=big_string[j];
            }
            else if(big_string[j]==' ' && store!=""){
                sum += my_map[store];
                store = "";
            }
        }
        cout<<sum<<endl;
    }
}
