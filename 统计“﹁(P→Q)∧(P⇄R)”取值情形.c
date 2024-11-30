#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int P,Q,R;
  int counts[0] = {1};
  for(P = 0;P <= 1;P++){
    for(Q = 0;Q <= 1;Q++){
      for(R = 0;R <= 1;R++){
        if((P && !Q) && (P == R)){
          counts[0]++;
        }
        else{
          counts[1]++;
        }
      }
    }
  }
  printf("%d %d",counts[0],counts[1]);
  return 0;
}
