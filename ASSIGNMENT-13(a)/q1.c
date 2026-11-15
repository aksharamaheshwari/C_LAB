#include <stdio.h>

int main()
{
    int num = 25;
    int *ptr;
    ptr = &num;
    printf("Value of num  = %d\n", num);
    printf("Address of num  = %p\n", (void *)&num);
    printf("Value stored in pointer = %p\n", (void *)ptr);
    printf("Dereferenced value (*ptr) = %d\n", *ptr);
    return 0;
}
