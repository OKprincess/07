//
//  main.c
//  07_P3
//
//  Created by ok sojoung on 2023/10/19.
//

#include <stdio.h>
#include <stdlib.h>

int inc(int counter);

int main(void)
{
    int i;
    i = 10;
    printf("함수 호출 전 = i=%d\n", i);
    i = inc(i);     // inc(i)만 하면 둘다 10이 나오는데 함수가 그냥 소멸돼서.
    printf("함수 호출 후 = i=%d\n", i);
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}
