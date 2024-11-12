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

int main(){ }
    int numbers[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i;
    for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        if (isPrime(numbers[i])) {
            printf("%d 是素数\n", numbers[i]);
        } else {
            printf("%d 不是素数\n", numbers[i]);
        }
    }
    return 0;
}
