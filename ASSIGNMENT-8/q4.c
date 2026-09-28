#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (tolower(str[i]) != tolower(str[length - i - 1]))
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
