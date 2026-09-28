#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        int alreadyCounted = 0;

        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted == 0)
        {
            count = 0;

            for (j = 0; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                    count++;
            }

            printf("%c = %d\n", str[i], count);
        }
    }

    return 0;
}
