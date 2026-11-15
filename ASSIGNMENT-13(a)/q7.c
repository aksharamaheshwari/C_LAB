#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Value of x using x    = %d\n", x);
    printf("Value of x using *p   = %d\n", *p);
    printf("Value of x using **pp = %d\n", **pp);
    printf("Address of x (&x) = %p\n", (void *)&x);
    printf("Value of p        = %p\n", (void *)p);
    printf("Value of *pp      = %p\n", (void *)*pp);
    printf("Address of pointer p (&p) = %p\n", (void *)&p);
    printf("Value of pp  = %p\n", (void *)pp);
    printf("Address of pointer pp (&pp) = %p\n", (void *)&pp);
    return 0;
}
