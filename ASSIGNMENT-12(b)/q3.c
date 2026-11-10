#include <stdio.h>

enum Type {
    INT_VALUE,
    FLOAT_VALUE,
    CHAR_VALUE
};

union Data {
    int i;
    float f;
    char c;
};

struct Value {
    enum Type tag;
    union Data data;
};

void printValue(struct Value v)
{
    switch (v.tag)
    {
        case INT_VALUE:
            printf("Integer value = %d\n", v.data.i);
            break;

        case FLOAT_VALUE:
            printf("Float value = %.2f\n", v.data.f);
            break;

        case CHAR_VALUE:
            printf("Character value = %c\n", v.data.c);
            break;

        default:
            printf("Invalid type\n");
    }
}

int main()
{
    struct Value v;
    v.tag = INT_VALUE;
    v.data.i = 25;
    printValue(v);
    v.tag = FLOAT_VALUE;
    v.data.f = 45.67;
    printValue(v);
    v.tag = CHAR_VALUE;
    v.data.c = 'A';
    printValue(v);

    return 0;
}
