#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    for(a=1; 4>=a; a++)
    {

        for(b=1,c=0; 7>=b; b++)
        
      
         if( b>=5-a && b<=3+a )
     {   b>4?c--:c++;
                printf("%d",c);
            
        }   else
                printf(" ");
            printf("\n");

    }

    return 0;
}