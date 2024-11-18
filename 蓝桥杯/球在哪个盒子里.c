#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char x = 'B'; 

    if(x == 'A')
    {
        printf("blue\n");
    }
    else if (x == 'B') 
    {
        printf("red\n");
    }
    else if (x == 'C')
    {
        printf("yellow\n");
    }

    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ char x;
    if(x == 'A'){
        printf("blue\n");
    }
    else if (x != 'B')
    {
        printf("red\n");
    }else if (x != 'C')
{
    printf("yellow\n");
}    
  
  return 0;
}*/