#include <stdio.h>

union Number
{
    int i;
    float f;
};

int main()
{
    union Number num[3];
    num[0].i = 10;
    num[1].i = 20;
    num[2].i = 30;
    printf("Integer values:\n");

    for (int j = 0; j < 3; j++)
    {
        printf("num[%d].i = %d\n", j, num[j].i);
    }
    num[1].f = 7.5f;
    printf("\nAfter overwriting the second element:\n");
    printf("num[1].f = %.2f\n", num[1].f);

    return 0;
}
