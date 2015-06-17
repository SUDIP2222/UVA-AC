#include<stdio.h>

int main (){

    char s[100];
    int i=0;

    while(gets(s)){

        if(strcmp(s,"*")==0){
           break;
        }

        else if(strcmp(s,"Hajj")==0){

           printf("Case %d: Hajj-e-Akbar\n",++i);

        }

        else if(strcmp(s,"Umrah")==0){

           printf("Case %d: Hajj-e-Asghar\n",++i);

        }

    }

    return 0;
}
