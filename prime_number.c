#include<stdio.h>
void main()
{
  int n,box=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    if (n%i==0)
    box++;
  }
    if(box>2)
        printf("Not Prime");
    else
        printf("Prime");
}
