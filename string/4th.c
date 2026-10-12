#include<stdio.h>
#include<string.h>
int main(){
    int value;
    char s1[30],s2[30];
    printf("Enter string 1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter string 2: ");
    fgets(s2, sizeof(s2), stdin);
    value=strcmp(s1,s2);
    if(value==0){
        printf("Same\n");
    }
    else{
        printf("not same\n");
    }
}