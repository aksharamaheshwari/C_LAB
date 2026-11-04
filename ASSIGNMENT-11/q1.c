#include <stdio.h>
void display()
{
    auto int x=25;
    printf("Outside inner block:%d\n",x);
    {
        auto int x=10;
        printf("Inside inner block:%d\n",x);
    }
    printf("Outside Inside inner block:%d\n",x);
}
int main()
{
    display();
    return 0;
}
