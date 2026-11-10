#include <stdio.h>

typedef struct
{
    unsigned int read    : 1;
    unsigned int write   : 1;
    unsigned int execute : 1;
    unsigned int admin   : 1;
} Permission;

int main()
{
    Permission p;

    printf("Enter read permission (0 or 1): ");
    scanf("%u", &p.read);

    printf("Enter write permission (0 or 1): ");
    scanf("%u", &p.write);

    printf("Enter execute permission (0 or 1): ");
    scanf("%u", &p.execute);

    printf("Enter admin permission (0 or 1): ");
    scanf("%u", &p.admin);

    printf("Permissions: %c%c%c%c\n",
           p.read ? 'r' : '-',
           p.write ? 'w' : '-',
           p.execute ? 'x' : '-',
           p.admin ? 'A' : '-');

    return 0;
}
