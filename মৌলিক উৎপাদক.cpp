#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    int flag = 0;
    while (scanf("%lld", &n) == 1)
    {
        if (n < 0)
        {
            break;
        }
        if (flag)
        {
            printf("\n");
        }
        while (n % 2 == 0)
        {
            printf("    2\n");
            n /= 2;
        }
        long long tryit;
        for (tryit = 3; tryit <= sqrt(n); tryit += 2)
        {
            while (n % tryit == 0)
            {
                printf("    %lld\n", tryit);
                n /= tryit;
            }
        }
        if (n> 2)
        {
            printf("    %lld\n", n);
        }
        flag = 1;
    }

    return 0;
}
