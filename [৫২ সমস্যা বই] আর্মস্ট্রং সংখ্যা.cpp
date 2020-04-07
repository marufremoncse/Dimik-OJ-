#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;

        int test = input;
        int power;
        int count=0;
        do{
            test/=10;
            count++;
        }while(test);

        power = count;

        test = input;
        int sum = 0;
        while(test){
            sum+=ceil(pow(test%10,power));
            test= (int)test/10;

        }
        if(sum==input){
            cout<<input<<" is an armstrong number!"<<endl;
        }
        else{
            cout<<input<<" is not an armstrong number!"<<endl;
        }
    }
}

