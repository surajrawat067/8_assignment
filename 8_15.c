#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    for(a=1; 5>=a; a++)
    {

        for(b=1; 5>=b; b++)
         if( b==5 || a==5 || b==6-a)
                printf("*");
           else
                printf(" ");
            printf("\n");

    }

    return 0;
}