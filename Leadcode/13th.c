#include<stdio.h>

char* display();
void main(){
    char *str;
    str=display();
    printf("string is:%s",str);
}

char* display(){
    char* str="Devesh\n";
    return str;
}