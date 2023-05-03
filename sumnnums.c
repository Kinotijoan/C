 #include <stdio.h>

int sum_Num (int n);
int main(void)
 {
    int n = 5;
    int sum;
    sum = sum_Num(n);
    printf("Sum of 1 to n is : %d", sum);

    return (0);
 }
int sum_Num (int n)
  {
    
    if (n == 1)
    {
        return (1);
    } 
    
       return (n + sum_Num(n - 1));
  
    

  }