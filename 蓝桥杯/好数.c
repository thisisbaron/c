//题目：一个整数如果按从低位到高位的顺序，奇数位 (个位、百位、万位⋯ ) 上的数字是奇数，偶数位 (十位、千位、十万位 
//⋯ ) 上的数字是偶数，我们就称之为 “好数”。
//给定一个正整数N，请计算从 1 到N 一共有多少个好数。
#include <stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  for(;n>0;n--)
  {
    for(int m=n;m>0;)
    {
      if(m%2!=0)m/=10;
        else break;
      if(m%2==0)m/=10;
        else break;
      if(m==0)i++;
    }
  }
  printf("%d\n",i);
  return 0;
}