#include<stdio.h>
int main()
{
    static int a[2][3] = {{1,2,3},{4,5,6}};
    static int b[3][2],i,j;
    printf("数组 a:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("数组 b (竖排):\n");
    for(j=0;j<2;j++) 
    {
        for(i=0;i<3;i++) 
        {
            printf("%5d\n",b[i][j]);
        }
    }
    return 0;
}
