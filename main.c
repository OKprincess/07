//
//  main.c
//  07_P2
//
//  Created by ok sojoung on 2023/10/19.
//

#include <stdio.h>

int main(void)
{
    int i;
    int temp = 1;           // 아니면 for문 내부에 static int temp=1; 로 하면 생존기간이 늘어남.
                            // static은 초기화의 영역이기 때문에 for루프를 다시 돌 때 temp=1이 실행되지X
    for (i=0; i<5; i++)
    {
        printf("temp = %d\n", temp);
        temp++;
    }
    return 0;
}
