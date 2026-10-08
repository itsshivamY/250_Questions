#include <stdio.h>

void modify(char *, char *);

int main()
{
    char str1[] = "Devesh";
    char str2[] = "Shivam";

    modify(str1, str2);

    return 0;
}

void modify(char *str1, char *str2)
{
    int i, l = 0;

    for (i = 0; str1[i] != '\0'; i++)
    {
        l = l + 1;
    }

    str2[1] = 'z';
    printf("length of string l is: %d\n", l);
    printf("both the strings are: %s %s\n", str1, str2);
}