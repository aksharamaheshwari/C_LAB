#include <stdio.h>
int stringLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
void stringCopy(char source[], char destination[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
int stringCompare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];

        i++;
    }
    return str1[i] - str2[i];
}
int main()
{
    char str1[100], str2[100], copy[100];
    int result;
    int (*lengthPtr)(char[]) = stringLength;
    void (*copyPtr)(char[], char[]) = stringCopy;
    int (*comparePtr)(char[], char[]) = stringCompare;
    printf("Enter first string: ");
    scanf("%99s", str1);
    printf("Enter second string: ");
    scanf("%99s", str2);
    printf("Length of first string = %d\n", lengthPtr(str1));
    copyPtr(str1, copy);
    printf("Copied string = %s\n", copy);
    result = comparePtr(str1, str2);
    if (result == 0)
        printf("Both strings are equal.\n");
    else if (result > 0)
        printf("First string is greater than second string.\n");
    else
        printf("First string is smaller than second string.\n");
    return 0;
}
