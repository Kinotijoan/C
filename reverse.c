#include <stdio.h>
#include <string.h>
char reverse_string(char *s);

int main(void) 
{
    char *country = "Kenyal";

    printf("Kenya in reverse is :");

    reverse_string(country);
 
    return (0);
}

char reverse_string(char *s)
{
    int i;

    for ( i = strlen(s); i >= 0; i--)
    {
        printf("%c", s[i]);
    }
 
    return (0);
}