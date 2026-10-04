#include<stdio.h>
int main(){
    int num1,num2,max;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    //Decision making
    if(num1>num2){
        max=num1;
    }
    else{
        max=num2;
    }
    printf("\nThe maximum of %d and %d is : %d\n",num1,num2,max);
    return 0;
}