#include <stdio.h>
int main()
{ // 浮点类型 科学计数法
    double ff = 1234.56789;
    printf("%E,%f\n", ff, ff); // printf("%e,%f\n",ff);
    // printf("%e,%f\n",ff,ff)
    return 0;
}