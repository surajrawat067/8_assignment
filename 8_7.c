#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    for(a=1; 5>=a; a++)
    {

        for(b=1; 10>=b; b++)
         if( b<=6-a || b>=5+a )
                printf("*");
           else
                printf(" ");
            printf("\n");

    }

    return 0;
}