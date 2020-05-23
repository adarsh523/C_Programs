#include <stdio.h>
#include <stdlib.h>
int main()
{
int rem;
int num;
int sum=0;
int copy;
printf("Please enter a number");
scanf("%d",&num);
copy=num;
while(num>0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(copy==sum)
{
printf("It is an Armstrong number");
}
return 0;

}
