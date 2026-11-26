#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y, result;
    int (*ptr)(int, int);
    ptr = add;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    result = ptr(x, y);
    printf("Sum = %d\n", result);
    return 0;
}
