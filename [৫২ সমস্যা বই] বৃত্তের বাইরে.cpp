#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        double x, y, a, b, r;
        cin>>a>>b>>r>>x>>y;
        double res = sqrt((double)((a-x)*(a-x) + (b-y)*(b-y)));
        if(res<r){
            cout<<"The point is inside the circle"<<endl;
        }
        else{
            cout<<"The point is not inside the circle"<<endl;
        }
    }
}
