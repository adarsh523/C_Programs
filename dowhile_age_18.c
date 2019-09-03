#include<stdio.h>
void main()
{
  int age;
  do
  {
   printf("enter age: ");
   scanf("%d",&age);
   if(age<18)
   {
       printf("age must be greater than or equal to 18 \n");
   }
  }while(age<18);
}
