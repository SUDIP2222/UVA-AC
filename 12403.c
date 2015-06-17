#include<stdio.h>

int main (){

    int n,i,sum=0,don;

    char str[100];

    scanf("%d",&n);

    for(i=1;i<=n;i++){

        scanf("%s",str);

        if(strcmp(str,"donate")==0){
            scanf("%d",&don);

            sum=sum+don;

        }
        else{

           printf("%d\n",sum);

        }


    }

    return 0;
}
