#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}


int main(int argc, char const *argv[])
{
    int myArray[] = {1,2,4,7};
    int myArray2[] = {5, 3, 7, 2, 1, 8};

    int size1  = sizeof(myArray)/sizeof(myArray[0]);
    int size2  = sizeof(myArray2)/sizeof(myArray2[0]);

    int size3 = size1 + size2;
    int i, j;
    int myArray3[size3];

    for (i = 0, j = 0;i < size3; i++)
    {
        if (i < size1)
        {
            myArray3[i] = myArray[i];
            // continue;
        }
        else
        {
            myArray3[i] = myArray2[j];
            j++;
        }
        
    }

    for ( i = 0; i < size1; i++)
    {
        myArray3[i] = myArray[i];
    }

    for ( i = 0 , j = size1; i < size2; i++)
    {
        myArray3[j] = myArray2[i];
        j++;
    }
    
    for (int i = 0; i < size3; i++)
    {
        printf("%d ", myArray3[i]);
    }
    
    return 0;
}
