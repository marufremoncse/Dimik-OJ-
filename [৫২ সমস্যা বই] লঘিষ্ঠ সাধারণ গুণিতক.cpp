#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int j=0;j<n;j++){
        int num1, num2, maxValue;
        scanf("%d %d", &num1, &num2);
        maxValue = (num1 > num2) ? num1 : num2;

        while(1)
        {
           if ((maxValue % num1 == 0) && (maxValue % num2 == 0))
           {
              printf("LCM = %d", maxValue);
              break;
           }
           ++maxValue;
        }
        cout<<endl;
    }
}
