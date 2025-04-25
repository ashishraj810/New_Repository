#include<stdio.h>
void main()
{
    int remainder,divisor,dividend;
    float quotient;
    printf("enter the value of dividend:");
    scanf("%d",&dividend);
    printf("enter the value of divisor:");
    scanf("%d",&divisor);
    quotient=dividend/divisor;
    printf("the value of quotient is : %f \n");
    remainder=dividend-(divisor*quotient);
    printf("the value of remainder is : %d");
    


}