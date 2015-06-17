#include<stdio.h>

int main (){

    int n,i;


    scanf("%d",&n);

    for(i=1;i<=n;i++){

       int len ,wid,hei;

       scanf("%d %d %d",&len,&wid,&hei);

       if(len<=20&&wid<=20&&hei<=20){

           printf("Case %d: good\n",i);

       }
       else{

           printf("Case %d: bad\n",i);

       }

    }

    return 0;

}
