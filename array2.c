#include <stdio.h>

int main(void)
{
    int myArray[4] = {1,2,4,7};
    int myArray2[6] = {5, 3, 7, 2, 1, 8};

    int size1  = sizeof(myArray)/sizeof(myArray[0]);
    int size2  = sizeof(myArray2)/sizeof(myArray2[0]);

    int myArray3 = 

    int size3 = size1 + size2;
    int i;
    int myArray3[size3];
    int *ptr1 = myArray3;

     for (int i = 0; i < size1; i++) 
    {
        *ptr1 = myArray[i];
        ptr1++;
    }

    
    ptr1 = myArray3 + size1;
    
    for (int i = 0; i < size2; i++) 
    {
        *ptr1 = myArray2[i];
        ptr1++;
    }
    // print with pointer
    for ( i = 0; i < size3; i++)
    {
        printf("%d", myArray3[i]);
    }


    return 0;
}