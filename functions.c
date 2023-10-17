#include <stdio.h>

int sum(int num1, int num2);
int twice(int num3);

int main(void)
{
    int sum_of_num = sum(5,6);
    int square = twice(sum_of_num);
    printf("%d\n", sum_of_num);
    printf("%d", square);

    return 0;
}

int sum(int num1, int num2) 
{
    int sum = num1 + num2 ;
    return (sum);
}
int twice(int num3)
{
    int double_num = num3 * 2;
    return (double_num);
}