#include<stdio.h>

int main (){

    long long n;

    while(scanf("%lld",&n)==1){
        printf("%lld\n", (n * (n + 1) / 2 + 1));
    }
    return 0;
}
