#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  char P,Q,R;
  scanf("%s",&P);
  scanf("%s",&Q);
  scanf("%s",&R);
  P=(Q=R);
  Q=(P=R);
  if(P==Q && R==Q)
  printf("yes");
  else
  printf("no");
  return 0;
}
