#include <stdio.h>

int isPrime(int x) {
    int ret = 1;
    int i;
    if (x == 1 || (x % 2 == 0 && x != 2))
        ret = 0;
    for (i = 3; i * i <= x; i += 2) {
        if (x % i == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}

int main()
{int numbers;
printf("输入一个整数：");
scanf("%d",&numbers); 
   
        if (isPrime(numbers)) {
            printf("%d 是素数\n", numbers);
        } else {
            printf("%d 不是素数\n", numbers);
        }
    
    return 0;
}
