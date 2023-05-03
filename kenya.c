#include <stdio.h>
#include <string.h>

int main(void) 
{
    int i;
    char *country = "kenya";

    printf("Kenya in reverse is :");
    for ( i = strlen(country); i >= 0; i--)
    {
        printf("%c", country[i]);
    }
 
    return (0);
}

