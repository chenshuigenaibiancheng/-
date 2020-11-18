#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include<stdlib.h>
float px(float x, int y)
{
    if (y == 0)
        return 1;
    else if (y == 1)
        return x;
    else
        return x * px(x, y - 1);

}




int main() {
    float x = 2;
    int y = 2;


    printf("请输入两个数字 \n");  
    scanf("%f %d", &x, &y);
    printf("result: %f\n",px(x,y)) ; 

    return 0;
}