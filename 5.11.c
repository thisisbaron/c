#include<stdio.h>
int main()
{
    int n,i;
    printf("输入一个数：");
    scanf("%d",&n);
    for(i = 2;i<n;i++)
      if(n%i==0) break;
    if(i == n) printf("%d is a prime number.\n",n);
    else printf("%d is not a prime number.\n",n);
}