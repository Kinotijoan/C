#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("The sum of numbers 1 to 10 is :%d", sum);
    return (0);
}