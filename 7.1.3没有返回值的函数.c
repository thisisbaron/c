#include<stdio.h>

void sum(int begin,int end)
{
    int i;
    int sum = 0;
    for(i = begin; i <= end; i++){
        sum += i;
    }
    printf("%d到%d的和是%d\n",begin, end,sum);
}
int main(){
    sum(1,10);
    return 0;
}
//void(参数名)
//不能使用带值的return
//可以没有return
//如果函数有返回值，则必须使用带值的return