#include<stdio.h>
int main()
{
    int i = 0,n = 10;
    while(n<=50)
    {
        if(n%3==0){
            n++;continue;
        }
    printf("%5d",n);
    i++;n++;
    if(i%10 == 0)printf("\n");
    }
    printf("\n");
}