#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    for(a=1,c=1; 4>=a; a++)
    {

        for(b=1,c=1; 7>=b; b++)
         if( b<=5-a || b>=3+a )
        
         { 
              printf("%d",c);
          b>=4?c--:c++; 
        
        }   else
         {       printf(" ");
            if(b==4)
            c--;
           } printf("\n");

    }

    return 0;
}