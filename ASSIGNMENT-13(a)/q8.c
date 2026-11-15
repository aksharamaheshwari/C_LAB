#include <stdio.h>

void update_pointer(int **p, int *new_address)
{
    *p = new_address;
}

int main()
{
    int x = 10;
    int y = 20;

    int *ptr = &x;

    printf("Before updating pointer:\n");
    printf("ptr points to x\n");
    printf("Value = %d\n", *ptr);
    printf("Address stored in ptr = %p\n", (void *)ptr);

    update_pointer(&ptr, &y);
    printf("After updating pointer:\n");
    printf("ptr points to y\n");
    printf("Value = %d\n", *ptr);
    printf("Address stored in ptr = %p\n", (void *)ptr);

    return 0;
}
