#include<stdio.h>

int main() 
{
    int i, j, k;
    int a = 1; 
    int cnt = 0; // 初始化计数器
    const int MAX = 4; 

    for(i = a; i <= a + 3; i++) 
        for(j = a; j <= a + 3; j++) {
            for(k = a; k <= a + 3; k++) { 
                if(i != j) { 
                    if(j != k) { 
                        cnt++;
                        printf("%d%d%d", i, j, k); 
                        if(cnt == 6) {
                            printf("\n");
                            cnt = 0; 
                        } else {
                            printf(" ");
                        }
                    }
                }
            }
        }
        return 0;
    }
    
