#include<stdio.h>
int* returnPointer(int[]);
void main(){
    int a[]={1,3,6,8,54,45,45},*p;
    //a=a+2;
    p=returnPointer(a);
    printf("%d\n",*p);
}
int* returnPointer(int a[]){
    a=a+2;
    return a;
}