#include<stdio.h>
int main()
{
    // 输出精度：在%和f之间加上.n可以指定输出小数点后几位,这样的输出是做4舍5入的
    printf("%.3f\n",-0.0049); //3位小数
    printf("%.30f\n",-0.0049); // 30位小数
    printf("%.3f\n",-0.00049);
}