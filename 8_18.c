#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,k,n;
    for(a=1; a<=9; a++)
    {  
    a<6? (k=a): (k=10-a);
     for(b=1,c=1; b<=9; b++)
        {   if (b>=6-k && b<=4+k)
      { 
                printf("*");
          
           } else
                printf(" "); 
        }
          printf("\n");
    }
    return 0;
}