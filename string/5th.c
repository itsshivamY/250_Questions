
#include <stdio.h>
#include <string.h>

int main(void) {
    int l, i;
    char s1[30], c;
    printf("Enter string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    l = strlen(s1);
    for (i = 0; i < l / 2; i++) {
        c = s1[i];
        s1[i] = s1[l - 1 - i];
        s1[l - 1 - i] = c;
    }
    printf("Reversed string: %s\n", s1);
    return 0;
}
