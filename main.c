//
//  main.c
//  07_P1
//
//  Created by ok sojoung on 2023/10/19.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int flag = 1;
    int y;              // y를 전체함수에서 정의하면 ㄱㅊ
    while(flag != 0)
    {
        //int y;          // y의 범위는 while 블록
        y = 3;
        flag = 0;
    }
    y = 4;
    return 0;
}
