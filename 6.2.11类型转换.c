#include<stdio.h>
int main()
{   
    // 强制类型转换：要把一个量强制转换成另一个类型（通常是较小的类型）
    // （类型）值
    int i=32768;
    short s=(short)i;
    printf("%d\n",i);//(short)32768);

    return 0;
}