#include<stdio.h>
int main()
{    int i,size,result;
    int num0f0,num0fx;
    int j;
    int board;
    //检查行
    for (i = 0;i < size && result == -1;i++){
        num0f0 = num0fx = 0;
        for(j = 0;j <size;j++){
            if(board[i][j] == 1)
            num0fx ++;
        }       else{
            num0f0 ++;
        }
    }
    if(num0f0 == size) 
    {
        result = 0;
    }else if (num0fx == size){
        result = 1;
    }
    //检查列
    if ( result == -1){
        for(j = 0;j <size && result == -1;j++)
    
    {num0f0 = num0fx = 0;
        for (i = 0;i < size ; i++){
            if(board[i][j] == 1)
             
        }
        /* code */
    }
    
}