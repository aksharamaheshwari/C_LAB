#include <stdio.h>

static int num = 100;   

void display()
{
    printf("Value of num = %d\n", num);
}
#include <stdio.h>

void display();

int main()
{
    display();

    return 0;
}
