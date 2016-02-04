#include<stdio.h>

int main (){

    long long int i,j,len;

    char str[10000];

    while(gets(str)){

        len =strlen(str);

        for(i=0;i<len;i++){
        if (str[i]=='6')
            printf("5");
        if (str[i]=='7')
            printf("6");
        if (str[i]=='8')
            printf("7");
        if (str[i]=='9')
            printf("8");
        if (str[i]=='0')
            printf("9");
        if (str[i]=='-')
            printf("0");
        if (str[i]=='=')
            printf("-");
        if (str[i]=='W')
            printf("Q");
        if (str[i]=='E')
            printf("W");
        if (str[i]=='R')
            printf("E");
        if (str[i]=='T')
            printf("R");
        if (str[i]=='Y')
            printf("T");
        if (str[i]=='U')
            printf("Y");
        if (str[i]=='I')
            printf("U");
        if (str[i]=='O')
            printf("I");
        if (str[i]=='P')
            printf("O");
        if (str[i]=='[')
            printf("P");
        if (str[i]==']')
            printf("[");
        if (str[i]=='\\')
            printf("]");
        if (str[i]=='S')
            printf("A");
        if (str[i]=='D')
            printf("S");
        if (str[i]=='F')
            printf("D");
        if (str[i]=='G')
            printf("F");
        if (str[i]=='H')
            printf("G");
        if (str[i]=='J')
            printf("H");
        if (str[i]=='K')
            printf("J");
        if (str[i]=='L')
            printf("K");
        if (str[i]==';')
            printf("L");
        if (str[i]=='\'')
            printf(";");
        if (str[i]=='X')
            printf("Z");
        if (str[i]=='C')
            printf("X");
        if (str[i]=='V')
            printf("C");
        if (str[i]=='B')
            printf("V");
        if (str[i]=='N')
            printf("B");
        if (str[i]=='M')
            printf("N");
        if (str[i]==',')
            printf("M");
        if (str[i]=='.')
            printf(",");
        if (str[i]=='/')
            printf(".");
        if (str[i]==' ')
            printf(" ");
        if (str[i]=='\n')
            printf("\n");
        if (str[i]=='1')
            printf("`");
        if (str[i]=='2')
            printf("1");
        if (str[i]=='3')
            printf("2");
        if (str[i]=='4')
            printf("3");
        if (str[i]=='5')
            printf("4");

        }
         printf("\n");
    }


    return 0;
}
