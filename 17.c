#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    for(a=1; 5>=a; a++)
    {

        for(b=1; 9>=b; b++)
         if( b==a ||  a==1 || b==10-a)
                printf("*");
           else
                printf(" ");
            printf("\n");

    }

    return 0;
}