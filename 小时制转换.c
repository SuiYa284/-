#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&a,&b);
    if (a>12)
    {
        c=a-12;
        printf("Equivalent 12-hour time:%d:%02d PM",c,b);
    }
    else if (0<a<12)
    {
        printf("Equivalent 12-hour time:%d:%02d AM",a,b);
    }
    else if (a==12)
    {
        printf("Equivalent 12-hour time:%d:%02d AM",a,b);
    }
    else if (a==0)
    {
        printf("Equivalent 12-hour time:12:%02d AM",b);
    }
}