#include<bits/stdc++.h>
using namespace std;

long long int fact(int n){
    if(n==0 || n==1)
        return 1;
    return n * fact(n-1);
}

int main()
{
    map<string, int> my_map;
    int n;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        string input;
        getline(cin,input);
        input+=" ";
        bool flag = false;
        string store = "";
        for(int j=0;j<input.length();j++){
            if(input[j]!=' '){
                flag = true;
            }
            if(input[j]!=' ' && flag==true){
                store += input[j];
            }
            else if(input[j]==' '){
                flag = false;
                if(my_map[store]>=1){
                    my_map[store]++;
                    store="";
                }
                else if(store!=""){
                    my_map[store]=1;
                    store="";
                }
            }
        }
        int count = 0;
        int ara[10] = {1};
        int k=0;
        map<string, int>::iterator it = my_map.begin();
        while (it != my_map.end())
        {
            count+=it->second;
            if(it->second>1){
                ara[k++] = it->second;
            }
            it++;
        }
        int mul = 1;
        for(int i=0;i<k;i++){
            mul*=fact(ara[i]);
        }
        int res = fact(count)/mul;
        cout<<"1/"<<res<<endl;
        my_map.clear();
    }
}
