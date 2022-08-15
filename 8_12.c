#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    c='A';
    for(a=1; a<=4; a++)
    {   for(b=1,c='A'; b<=7; b++)
        {   if(b>=a && b<=8-a)
      {  
                printf("%c",c);
            b>=4?c--:c++;
           } else
                printf(" ");
        }
          printf("\n");
    }
    return 0;
}