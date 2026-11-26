#include <stdio.h>
int main()
{
    char source[100], destination[100];
    char *p, *q;
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    p = source;
    q = destination;
    while (*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';
    printf("Original string: %s", source);
    printf("Copied string: %s", destination);
    return 0;
}
