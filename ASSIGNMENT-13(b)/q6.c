#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    char *p, *q;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    p = str1;
    q = str2;
    while (*p != '\0' && *q != '\0' && *p == *q)
    {
        p++;
        q++;
    }
    if (*p == *q)
        printf("Both strings are equal.\n");
    else if (*p > *q)
        printf("First string is greater than second string.\n");
    else
        printf("First string is smaller than second string.\n");
    return 0;
}
