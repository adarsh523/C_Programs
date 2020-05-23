#include<stdio.h>
void main()
{
   int n,b,box=0;
   printf("enter n: ");
   scanf("%d",&n);
   while(n>0)
   {
       b=n%10;
       n=n/10;
     if(b==7)
        box++;
   }
    printf("%d",box);


}
