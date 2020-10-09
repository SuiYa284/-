#include <stdio.h>
int main()
{
    float money = 0, a = 0, A = 0, b = 0, B = 0, c = 0, C = 0, d = 0;
    printf("enter:");
    scanf("%d", &money);
    a = money / 20, A = money % 20;
    b = A / 10, B = A % 10;
    c = B / 5, C = B % 5;
    d = B / 1;
    printf("%d,%d,%d,%d", a, b, c, d);
    return 0;
}
