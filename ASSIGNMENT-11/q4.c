#include <stdio.h>
void display()
{
    static int a=0;
    a++;
    printf("Function called %d times\n",a);
}
int main()
{
    display();
    display();
    display();
    display();
    return 0;
}
