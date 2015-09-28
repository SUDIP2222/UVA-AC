#include<stdio.h>

int main()
{

    int k,n,car;

    while(scanf("%d %d",&n,&k)==2 &&k>1)
    {
        car=n;

        while(n>=k)
        {
            car+=(n/k);
            n=(n/k)+(n%k);
        }
        printf("%d\n",car);
    }

    return 0;
}
