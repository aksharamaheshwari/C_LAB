#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;

    printf("Initial pointer:\n");
    printf("p = %p, *p = %d\n\n", (void *)p, *p);
    printf("Before p++: p = %p, *p = %d\n", (void *)p, *p);
    printf("After  p++: p = %p, *p = %d\n\n", (void *)p, *p);
    printf("Before p--: p = %p, *p = %d\n", (void *)p, *p);
    printf("After  p--: p = %p, *p = %d\n\n", (void *)p, *p);
    printf("Before p + 2: p = %p, *p = %d\n", (void *)p, *p);
    printf("After  p + 2: p = %p, *p = %d\n\n", (void *)p, *p);
    printf("Before p - 1: p = %p, *p = %d\n", (void *)p, *p);
    printf("After  p - 1: p = %p, *p = %d\n", (void *)p, *p);
    return 0;
}
