#include<stdio.h>

int main ()
{

    int n,i,j,arr[200],sum,avr,move,test=0;

    while(scanf("%d",&n)==1 && n!=0)
    {


        sum=0;
        move=0;
        test++;
        for(i=1; i<=n; i++)
        {

            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }



        avr=sum/n;

        for(j=1; j<=n; j++)
        {

            if(avr<arr[j])
            {

                move+=arr[j]-avr;

            }

        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",test,move);
    }

    return 0;
}
