#include<stdio.h>

int main (){
   int n,i,num;
   long long res;
   scanf("%d",&n);

   for(i=0;i<n;i++){
       scanf("%d",&num);
       res=abs((((num*63)+7492)*5)-498);
       printf("%d\n",(res/10)%10);
   }

   return 0;
}
