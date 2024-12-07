#include<stdio.h>

int main()
{
    int i = 0;
    int *p;
    
   
    p = (int*)&i;
    
    printf("0x%p\n",(void*)p); 
    printf("%p\n",&i); 
    printf("%lu\n",sizeof(int)); 
    printf("%lu\n",sizeof(&i)); 

    return 0;
}
