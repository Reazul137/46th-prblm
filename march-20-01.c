#include<stdio.h>
int main()
{
    double i, d, s=1, j=1;

    for(i=1; i<=7; i+=2)
    {
        d=(i/j);
        s += d;
        j = j*2;
    }

    printf("Value of series : %.2lf\n", s);

    return 0;
}
