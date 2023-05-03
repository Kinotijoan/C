#include <stdio.h>

int fibonacci(int a, int b);

int main(void)
{
    int a = 0;
    int b = 1;
    printf("\n\n Recursion : Print Fibonacci Series :\n");
	printf("-----------------------------------------\n");   
 
   printf(" The Series are :\n"); 
   printf(" 1  ");
   fibonacci(a, b);
   printf("\n\n");


    return (0);
}

int fibonacci(int a, int b)
{
  
    int i;
    int n = 20;
    int nxtnum;
     if (i >= n)
        return (0);
    else 
        {
            nxtnum = a + b;
            a = b;
            b = nxtnum;
            printf("%d",nxtnum);

            i++;
            fibonacci(a, b);
        
        }

    

    return (0);
}