#include <stdio.h>

int main()
{
    int i;
    char c;
    scanf("%d %c", &i, &c); // 读取一个整数和一个字符
    printf("i=%d, c=%d, c='%c'\n", i, c, c); // 打印整数，字符的ASCII值，和字符本身
    return 0;
}
