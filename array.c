#include <stdio.h>

int main(void)
{
    int myArray[5];
    int length = sizeof(myArray)/sizeof(myArray[0]);
    int mid = length/2;

    int i;
    for(i=0; i<length; i++)
    {
        myArray[i] = i;
    }
    for ( i = 0; i < length; i++)
    {
        printf("%d", myArray[i]);
    }
        printf("\n");
    for ( i = 0; i < length; i++)
    {
        myArray[i]*=2;
    }
    // for ( i = 0; i < length; i++)
    // {
    //     printf("%d", myArray[i]);
    // }
    printf("\n");
    // for ( i = 0; i < mid; i++)
    // {
    //    int temp = myArray[i];
    //    int index = length-1;
    //    myArray[i] = myArray[index-i];
    //    myArray[index-i] = temp;
    // }
    int *ptr = myArray;
    int *ptr2 = &myArray[length-1];
    int temp;
    for ( i = 0; i < mid; i++)
    {
       temp = *ptr;
       *ptr = *ptr2;
       *ptr2 = temp;
       ptr++;
       ptr2--;

    }
    for ( i = 0; i < length; i++)
    {
        printf("%d", myArray[i]);
    }
    
    
    


    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter the number :");
    //     scanf("%d", &arr[i]);
    // }
    //  printf("The values stored into the array are :\n");
    //  for (i = 0; i < n; i++)
    // {
    //     printf(" %d", arr[i]);
       
    // }
    // printf("\nThe values store into the array in reverse are :\n");
    //  for (i = n-1; i >= 0; i--)
    // {
    //     printf(" %d", arr[i]);
        
    // }

    return(0);
}