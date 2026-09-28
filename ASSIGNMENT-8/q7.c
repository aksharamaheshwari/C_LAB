#include <stdio.h>
#include <string.h>

int main()
{
    char first[20], last[20], full[50];

    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("Full name: %s", full);

    return 0;
}
