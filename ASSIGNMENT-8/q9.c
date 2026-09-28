#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100], word[20];
    char *p;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter word to search: ");
    scanf("%s", word);

    p = strstr(sentence, word);

    if (p != NULL)
        printf("Word found at position %d", (int)(p - sentence + 1));
    else
        printf("Word not found");

    return 0;
}
