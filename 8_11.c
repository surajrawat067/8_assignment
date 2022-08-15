#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    for(a=1; 5>=a; a++)
    {

        for(b=1,c='A'; 9>=b; b++)
        
      
         if( b>=6-a && b<=4+a )
     {   
                printf("%c",c);
            b>4?c--:c++;
        }   else
                printf(" ");
            printf("\n");

    }

    return 0;
}