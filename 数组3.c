#include <stdio.h>

int main() {
    int a[20] = {3, 7, 10, 12, 18, 20};
    int x = 15, i, n = 6;
    i = n - 1;
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i]; 
        i--;
    }
    a[i + 1] = x; // 插入新元素
    n++;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]); 
    }
    return 0;
}
