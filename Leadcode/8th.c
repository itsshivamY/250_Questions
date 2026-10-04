#include<stdio.h>
void main(){
    int a,b,temp;
    printf("Enter first number (a): ");
    scanf("%d",&a);
    printf("Enter second number (b): ");
    scanf("%d",&b);
    printf("Enter swapping: a= %d, b= %d\n ",a,b);

    //swipping logic
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a= %d, b= %d\n",a,b);
    // return 0;
}