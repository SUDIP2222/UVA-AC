#include<stdio.h>

int main ()
{
    int arr[10],i,n,l,c,d,swap;

    scanf("%d",&n);

    for(l=1; l<=n; l++)
    {

        for(i=0; i<3; i++)
        {
            scanf("%d",&arr[i]);

        }

        for (c = 0 ; c < ( 3 - 1 ); c++)
        {
            for (d = 0 ; d < 3 - c - 1; d++)
            {
                if (arr[d] > arr[d+1])
                {
                    swap       = arr[d];
                    arr[d]   = arr[d+1];
                    arr[d+1] = swap;
                }
            }
        }

        printf("Case %d: %d\n",l,arr[1]);


    }

    return 0;
}
