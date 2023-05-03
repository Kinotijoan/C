#include <stdio.h>

int main(void)
{
    int i;
    int n;

      printf("Enter value of n :");
      scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter number in the array :");
        scanf("%d", &a[i]);
    }
    printf("Input in the array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("Element - %d :", i);
        printf(" %d\n", a[i]);
    }

    int sum;

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    
    printf("\n\nSum of all elements stored in the array is : %d", sum);


    return (0);
}