#include<stdio.h>
#include<stdlib.h>
 struct student
    {
        int roll;int age;char address[50];
        char name[50];
    }s1[11];
void foryy(int i)
    {
        print("names of the student @ age 14:%s",s1[i].name);
    }
void main()
{
    int i,y;

    for(i=0;i<=10;i++)
    {
    int x=s1[i].age;
    if(x==14)
        foryy(i);
    }
    for(i=0;i<=10;i++)
    {
    print(i);
    }
    scanf("%d",&y);
    for(i=0;i<=10;i++)
    {;
    if(y==s1[i].age)
        print(i);
    }
}
void print(int i)
            {
                print("enter the name: ");
                scanf("%s",&s1[i].name);
                print("enter the roll: ");
                scanf("%d",&s1[i].roll);
                print("enter the address: ");
                scanf("%s",&s1[i].address);
                print("enter the age: ");
                scanf("%d",&s1[i].age);
            }
