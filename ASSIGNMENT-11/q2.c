#include <stdio.h>
int a=25;
int main()
{
    printf("Global number=%d\n",a);
    {
        int a=10;
        printf("Block number=%d\n",a);
    }
    printf("Global number=%d\n",a);
    return 0;
}
