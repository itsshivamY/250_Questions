#include<stdio.h>
void add(int a,int b){
    printf("addition is : %d\n",a+b);
}
void sub(int a, int b){
    printf("Subtraction is : %d\n",a-b);
}
void mul(int a,int b){
    printf("Multiplication is : %d\n",a*b);
}
void div(int a,int b){
    printf("Division is : %d\n",a/b);
}
int main(){
    int ch,a,b;
    printf("1 for add \n 2 for subtraction \n 3 for multiply \n 4 for divide: \n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    printf("Enter 1st numbers:");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d\n",&b);
    switch(ch){
        case 1: add(a,b); break;
        case 2: sub(a,b); break;
        case 3: mul(a,b); break;
        case 4: div(a,b); break;
        default: printf("Enter valid choice \n");
    }
}