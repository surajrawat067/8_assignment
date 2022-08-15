#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    for(a=1; 9>=a; a++)
    {

        for(b=1; 9>=b; b++)
            if(a>=10-b)
                printf("* ");
            else
                printf(" ");
            printf("\n");

    }

    return 0;
}