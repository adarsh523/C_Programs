#include<stdio.h>
 void main()
 {
   int score;
   char grade;
   printf("enter score: ");
   scanf("%d",&score);
   if(score>=90)
   {
      grade='A';
   }
   else if(score>=80)
   {
       grade='B';
   }
   else if(score>=70)
   {
      grade='C';
   }
   else
   {
      grade='F';
   }
    printf("grade is %c",grade);
 }
