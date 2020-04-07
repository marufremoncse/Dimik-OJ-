#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        double a, b, c;
        cin>>a>>b>>c;

        if(a+b<=c || a+c<=b || b+c<=a){
            cout<<"Area = "<<"0.000"<<endl;
        }
        else{
            double s = (a+b+c)/2;
            double res = 0;
            res = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area = %.3f\n",res);
        }
    }
}
