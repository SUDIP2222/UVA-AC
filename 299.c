#include<stdio.h>

int main()
{

    int test,i,j,k,arr[100],n,c,swap;

    scanf("%d",&test);

    for(i=0; i<test; i++)
    {

        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        c=0;
        for(j=0; j<n; j++)
        {

            for(k=0; k<n-1; k++)
            {
                if(arr[k]>arr[k+1])
                {
                    swap=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=swap;
                    c++;
                }
            }

        }

        printf("Optimal train swapping takes %lld swaps.\n",c);
    }

    return 0;
}
