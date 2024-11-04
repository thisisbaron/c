#include<stdio.h>

int isPrime(int i)
{   
    int ret = 1;
    int k;
    if(i <= 1) {
        return 0; // 0和1不是素数
    }
    for(k = 2; k * k <= i; k++) {
        if(i % k == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}

int main()
{
    int i;
    for(i = 1; i <= 100; i++) {
        if(isPrime(i)) {
            printf("%d 是素数\n", i);
        }
    }
    return 0;
}
