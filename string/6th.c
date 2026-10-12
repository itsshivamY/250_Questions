#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
    char s1[30];
    printf("Enter string: ");
    fgets(s1, sizeof(s1), stdin);
    for(int i = 0; s1[i] != '\0'; i++){
        s1[i] = tolower((unsigned char)s1[i]);
    }
    printf("string is: %s",s1);
}