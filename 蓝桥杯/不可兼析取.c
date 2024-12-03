//给定原子变元P、Q的真值(用1表示T，用0表示F)，求命题公式P Q的真值。
//输入原子变元P、Q的真值(1或0)，用空格隔开。
//输出命题公式P Q的真值(1或0)。
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int p,q;
  scanf("%d %d",&p,&q);
  if(p==q) printf("1");//判断pq是否相等
  else printf("0");
  return 0;
}
