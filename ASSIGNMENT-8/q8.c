#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], ch;
    char *p;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    p = strchr(str, ch);

    if (p != NULL)
        printf("Character found at position %d", (int)(p - str + 1));
    else
        printf("Character not found");

    return 0;
}
