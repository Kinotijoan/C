#include <stdio.h>

int main (void)
{
    int myArray[6] = {5,7,1,3,4,6};
    int length = sizeof(myArray)/sizeof(myArray[0]);
    int j = 0;
    int new_length = length;
    for (int i = 0; i < length; i++)
    {
        for (j = new_length-1; j >= 0; j--)
        {
            printf("%d",myArray[j]);
        }
        new_length-=1;
        printf(" \n");
    }

    return 0;
}