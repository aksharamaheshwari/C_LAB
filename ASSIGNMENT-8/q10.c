#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];
    char *word;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    word = strtok(sentence, " ");

    while (word != NULL)
    {
        printf("%s\n", word);
        count++;

        word = strtok(NULL, " ");
    }

    printf("Total words = %d", count);

    return 0;
}
