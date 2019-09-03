#include<stdio.h>

void main()
{
  double a,b,c,x,y,z;
  printf("enter no.= ");
  scanf("%lf" "%lf" "%lf" "%lf" "%lf",&a,&b,&c,&x,&y);
  z=y*10000+x*1000+c*100+b*10+1*a;
  printf("reverse no.= %lf",z);
  if(z==a*10000+b*1000+c*100+x*10+y*1)
  printf("reverse=forward");
  else
  printf("not equal to");
}
