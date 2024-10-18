#include <stdio.h>
int main()
{ // 科学计数法2
    double ff = 1E-10;
    // printf("%E,%f\n", ff, ff);
    printf("%E,%.16f\n",ff,ff);
    return 0;
}