#include <stdio.h>

typedef struct {
    unsigned int flag1;
    unsigned int flag2;
    unsigned int flag3;
    unsigned int flag4;
} NormalFlags;

typedef struct {
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int flag3 : 1;
    unsigned int flag4 : 1;
} BitFlags;

int main(void)
{
    NormalFlags n = {1, 0, 1, 0};
    BitFlags b = {1, 0, 1, 0};

    printf("Normal flags: %u %u %u %u\n",
           n.flag1, n.flag2, n.flag3, n.flag4);

    printf("Bit-field flags: %u %u %u %u\n",
           b.flag1, b.flag2, b.flag3, b.flag4);

    printf("Size of NormalFlags = %zu bytes\n",
           sizeof(NormalFlags));

    printf("Size of BitFlags    = %zu bytes\n",
           sizeof(BitFlags));

    return 0;
}
