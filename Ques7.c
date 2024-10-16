#include <stdio.h>
int main(void)
{
    int i = 1;
    int n;
    printf("Enter the Number whose Factorial you want to calculate --> ");
    scanf("%d", &n);
    int m = n;
    while (m >= 1)
    {
        i *= m;
        m--;
    }
    printf("The Value of %d factorial is %d", n, i);
    return 0;
}