#include<stdio.h>
int factorial(int num);
int main()
{
    int factnine = factorial(9);
    printf("%d", factnine);
    return 0;
}
int factorial(int num)
{
if (num == 1) 
{
    return 1;
    }
else
{
    return num * factorial(num - 1);
}
}