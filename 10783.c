#include<stdio.h>

int main (){

    int n,a,b,i,j;


    scanf("%d",&n);

    for(i=1;i<=n;i++){
            int sum=0;
        scanf("%d %d",&a,&b);

        for(j=a;j<=b;j++){
            if(j%2!=0){
               sum=sum+j;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }

    return 0;
}
