#include <stdio.h>

int main(void)
{
    int i;
    int n;

    printf("Enter value of n :");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element  :");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
    printf("%d" ,arr[i]);
    }
    return(0);
}

