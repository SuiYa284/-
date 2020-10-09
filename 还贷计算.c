#include <stdio.h>
int main()
{
    int a=0,b=0,B=0,c=0,d=0,e=0,f=0;
    printf("enter amout of loan:");
    scanf("%f",&a);
    printf("enter interest rate:");
    scanf("%f",&b);
    B=b/1200;
    printf("enter monthly payment:");
    scanf("%f",&c);
    d=(1+B)*(a-c);
    printf("Balance remaining after first payment:%.2f\n",d);
    e=(1+B)*(d-c);
    printf("Balance remaining after second payment:%.2f\n",e);
    f=(1+B)*(e-c);
    printf("Balance remaining after third payment:%.2f",f);
    return 0;
}
