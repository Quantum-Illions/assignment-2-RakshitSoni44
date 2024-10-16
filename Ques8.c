#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a Number -> ");
reset:
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Ok, you have entered a positive number ");
    }
    else
    {
        printf("Please enter Again --> ");
        goto reset;
    }
    return 0;
}