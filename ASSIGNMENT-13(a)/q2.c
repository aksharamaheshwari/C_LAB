#include <stdio.h>

int main()
{
    int num, original;
    int *ptr;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    ptr = &num;
    *ptr = *ptr + 10;
    printf("Original value = %d\n", original);
    printf("Modified value = %d\n", num);
    return 0;
}
