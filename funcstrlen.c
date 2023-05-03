#include <stdio.h>

int func_strlen(char *d);

int main(void)
{
    int i;
    char *country = "kenya";

    printf("Kenya in reverse is :");
    for ( i = func_strlen(country); i >= 0; i--)
    {
        printf("%c", country[i]);
    }

    
    return (0);
}

int func_strlen(char *d)
{
    int i = 0;

    for (; d[i] != '\0'; i++) 
        ;

    return (i);
}