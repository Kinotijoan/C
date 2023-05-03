#include <stdio.h>
#include <string.h>

int main(void)
{
    char rlgn[10];
    char a[] [10] = {"muslim", "christian", "jew", "budhist"};
    int i;
    int value;

   

    

    printf("Enter your religion: (muslim, christian, jew ,budhist\n");
    scanf("%s", rlgn);
    printf("your religion is %s.", rlgn);

    for (i = 0, i ,i++)
    value = strcmp(rlgn, a[][i]);


    if (value = 0)
    {
        printf("You worship in a Mosque\n");
    }
    else if (value = 0)
    {
        printf("You worship in a church\n");
    }
    else if (value = 0)
    {
        printf("You worship in a synagogue\n");  
    }
    else if (value = 0)
    {
        printf("You worship in a temple\n");
    }
    else
    {
        printf("I don't know where you worship.\n");
    }

    return(0);
}