#include <stdio.h>
void display()
{
    auto int a=0;
    static int b=0;
    a++;
    b++;
    printf("Automatic =%d,Static =%d\n",a,b);
}
int main()
{
    display();
    display();
    display();
    return 0;
}
