#include<stdio.h>

// 定义一个求和函数
void sum(int begin, int end) {
    int i;
    int sum = 0;
    for (i = begin; i <= end; i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin, end, sum);
}

// 主函数
int main() {
    sum(1, 10);
    sum(20, 30);
    sum(35, 45);
    return 0;
}
