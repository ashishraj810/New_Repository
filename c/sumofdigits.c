#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,sum;
    printf("enter the number at ones place:");
    scanf("%d",&a);
    printf("enter the number at tens place:");
    scanf("%d",&b);
    printf("enter the number at hundreds place:");
    scanf("%d",&c);
    sum=a+b+c;
    printf("sum of the digits is:%d",sum);
    getch();
}    