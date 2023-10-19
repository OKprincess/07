//
//  main.c
//  07_P4
//
//  Created by ok sojoung on 2023/10/19.
//

#include <stdio.h>

void f(void);

int i;
int main(void)
{
    for(i=0; i<5; i++)
    {
        f();
    }
    return 0;
}

void f(void)
{
    int i;              // 따로 i넣으면 ㄱㅊ
    for(i=0; i<10; i++)
        printf("#");
}
