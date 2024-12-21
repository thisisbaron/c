#include<stdio.h>

int main() {
    char a[100];
    int i = 0, word = 0, s = 0;

    
    fgets(a, sizeof(a), stdin);

    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == ' ') {
            word = 0;
        } else if (word == 0) {
            word = 1;
            s++; // 当遇到新单词的第一个字符时，增加单词计数
        }
    }

    printf("%d\n", s);
    return 0;
}
