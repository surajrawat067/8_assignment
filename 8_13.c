#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    c='A';
    for(a=1,c='A'; a<=7; a++)
    {   for(b=1,c='A'; b<=13; b++)
            if(b<=8-a || b>=a+6)
            {   printf("%c",c);
                b>6?c--:c++;
            }
            else
            {   printf(" ");
                if(b==7)
                    c--;

            }



        printf("\n");

    }

    return 0;
}