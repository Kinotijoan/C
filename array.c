#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter value of n :");
    scanf("%d", &n);

    int arr[n];
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Enter the number :");
        scanf("%d", &arr[i]);
    }
     printf("The values stored into the array are :\n");
     for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
       
    }
    printf("\nThe values store into the array in reverse are :\n");
     for (i = n-1; i >= 0; i--)
    {
        printf(" %d", arr[i]);
        
    }


    return(0);
}