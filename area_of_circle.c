#include<stdio.h>
#include<stdlib.h>
void main()
{
  int r;
  float area;
  const double PI=3.14;
  printf("enter radius: ");
  scanf("%d",&r);
  area=PI*r*r;
  printf("area of circle is %f",area);
}



