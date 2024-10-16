#include <stdio.h>
int main(void)
{
    int m;
    printf("Enter your marks --> ");
    scanf("%d", &m);
    if (m >= 40)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}