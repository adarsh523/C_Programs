#include<stdio.h>
void main()
{
  double time_spent,total_time,average_time;
  const int visitors=5;
  for(int i=1;i<=5;i++)
  {
  printf("time spent: ");
  scanf("%lf",&time_spent);
  total_time=time_spent+total_time;
  }
  average_time=total_time/5;
  printf("average time is %lf",average_time);
}
