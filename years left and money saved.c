#include<stdio.h>
void main()
{
   int i=1,current_age,years_left; double amount_saved_y;const double retirement_age=60;
    while(i!=0)
   {
       printf("retirement age is 60\n");
       printf("current age:");
       scanf("%d",&current_age);
         if(current_age<=0)
          {
            printf("enter +ve value");
          }
         else if(current_age>60)
          {
            printf("retired");
          }
         if(current_age>0&&current_age<60)
          {
            i=0;
        printf("\namount saved:");
        scanf("%lf",&amount_saved_y);
        years_left=retirement_age-current_age;
        amount_saved_y=amount_saved_y*years_left;
        printf("years left %d\n amount saved %lf",years_left,amount_saved_y);
         }
   }
   }
