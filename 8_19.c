#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,n;
    for(a=1; 3>=a; a++)
    {
        for(b=1,c=0; 19>=b; b++)
            if( b>=4-a && b<=6+a || b>=14-a && b<= 16+a)
            {
                printf("*");
            }   else
                printf(" ");
        printf("\n");
    }
    for(a=1; 10>=a; a++)
    {
        for(b=1; 19>=b; b++)
      {      if(a==1 && b==6)
                printf("my sir g");
        if(a==1 && b>=7 && b<=14)
            continue;
        if( b>=a && b<=20-a)
        {
            printf("*");
        }   else if(a==0 || b>=6 || b<=12)
            printf(" ");
}
        printf("\n");
    }





    return 0;
}