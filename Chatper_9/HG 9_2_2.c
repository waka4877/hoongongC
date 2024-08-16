#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p;
    printf("%lf\n", pd);        //pd=double형 p=int 형이라 형태가 달라 쓰레기값이 나온다.

    return 0;
}
