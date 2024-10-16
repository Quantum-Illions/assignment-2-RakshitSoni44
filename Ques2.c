#include <stdio.h>
int main(void)
{
    int a;
    float b;
    printf("Enter an Integer --> ");
    scanf("%d", &a);
    printf("Enter a Decimal Number --> ");
    scanf(" %f", &b);
    printf("Integer to Decimal => %0.1f\n", (float)a);
    printf("Decimal to Integer => %d", (int)b);
    return 0;
}