#include<stdio.h>
void main()
{
  int ic,st,fc;
  const double TR=0.0825;
  printf("enter ic: ");
  scanf("%d",&ic);
  st=TR*ic;
  fc=ic-st;
  printf("sales tax and final cost is %d and %d",st,fc);
}

