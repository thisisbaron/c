#include <stdio.h>
int main()
{
    int n;int j;int p;int d;
    scanf("%d", &n);
    n = 3;
    int first = 1;
    int i = 1;
    while (i < n)
    {
        first *= 10;
        i++;
    }
    printf("first = %d\n", first);
    // 遍厉100-999
    i = first;
    while (i < first*10){
        int t = i;
        int sum = 0;
        do{
            int d = t%10;
            t/=10;
            int p = 1;
            int j = 0;
        }while (j<n);
            { p *= d;
                j++;
                /* code */
            }while (t > 0);
            if (sum == i){
                printf("%d\n",i);
            }
            
        
        i++;
    }
     return 0;
    }
