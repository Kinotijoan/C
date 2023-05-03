# include <stdio.h>
int *givePtr();
int main()
{ 
    int n=57554;
    int *pN = givePtr(&n);
    printf("%p\n",pN);
    return 0;
}
int *givePtr(int *p)
{ 
    return p;
//    static int s = 6;
//    int *m =&s;
//    return m;
}
