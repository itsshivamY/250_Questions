#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int count = 0;
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    count = strlen(name);
    puts(name);
    printf("Length of string is: %d\n", count);
    return 0;
}