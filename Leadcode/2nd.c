#include<stdio.h>
void sum(){
    int a,b,sum=0;
    printf("Enter 1st numbers : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    sum = a+b;
    printf("sum=%d\n",sum);
}
void main(){
    printf("Thank you for visit our time pass Calculator\n");
    sum();
    sum();
    sum();
}