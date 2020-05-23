#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int result,h=0,t=0;
    srand(time(NULL));n
    for(int i=0;i<=10;i++)
    {
        result=rand()%2;
        if(result==0)
        {
            h++;
        }
        else
        {
            t++;
        }
    }
     printf("no. of heads=%d",h);
     printf("no. of tails=%d",t);
}
