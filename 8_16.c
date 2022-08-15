#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    for(a=1; 5>=a; a++)
    {

        for(b=1; 9>=b; b++)
         if(  b==6-a || a==5 || b==a+4)
                printf("*");
           else
                printf(" ");
            printf("\n");

    }

    return 0;
}