#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s);

int main(void)
{
    char *str;
    //int len;

    str = "My first strlen!";
   //  _strlen(str);
    printf("%d\n", strlen(str));
    return (0);
}

int _strlen(char *s)
{
    int i = 0;
    while (*(s + i))
    i++;
    return (i);
}
*/