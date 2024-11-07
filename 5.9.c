#include <stdio.h>
int main()
{
    int i, j;
    long p, s = 0;
    for (i = 1; i <= 10; i++)
    {
        p = 1;
        for (j = 1; j <= i; j++)
            p = p * j;
        s += p;
    }
    printf("s=%ld\n", s);
}