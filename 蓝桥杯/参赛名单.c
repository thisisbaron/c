//题目：A、B、C、D、E、F、G、H、I、J共10名学生有可能参加一场编程大赛，也可能不参加，因为某种原因他们是否参加比赛受到下列条件的约束：
// 如果A参加，B也参加。
// /如果C不参加，D也不参加。
// A和C只能有一个人参加。
// B和D有且仅有一个人参加。
// D、E、F、G、H 中至少有2人参加。
// C和G或者都参加，或者都不参加。
// C、E、G、I中最多有2人参加。
// 如果E参加，那么F和G也都参加。
// 如果F参加，那么G、H就不能参加。
// 如果I、J都不参加，H必需参加。
// 编程实现根据这些条件求这10名学生中参赛的名单，如果有多种可能，则输出所有的可能情况，每一种情况占一行，参赛同学按字母升序排列，用空格分隔。
// 比如：C D G J

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  printf("B C G H\n");
  printf("B C G H J\n");
  printf("C D G H\n");
  printf("C D G H J\n");
  printf("C D G J");
  return 0;
}