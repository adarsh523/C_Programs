#include<stdio.h>

void main()
            {
                int n,fact=1;
                scanf("%d",&n);
                for(int j=n;j>=1;j--)
                {
                fact=fact*j;
                printf("Factorial \t %d %d \n",j,fact);
                }
            }
