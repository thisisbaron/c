#include<stdio.h>
int main()
{
    char c[20];
    int i,j;
    i=0;
    scanf("%c",&c[0]);
    while((c[i]!='\n')&&(c[i]!=' '))
      { i++;
         scanf("%c",&c[i]);};
         for(j=i-1;j>=0;j--)
           printf("%c",c[j]);
}