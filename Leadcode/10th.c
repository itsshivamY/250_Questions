#include<stdio.h>
int main(){
    int i,n,factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    //factorial logic for positive nuumber
    if(n<0){
        printf("Error! factorial of a negative number doesn't exist.\n");
    }
    else{
        for(i=1;i<=n;++i){
            factorial *= i;
        }
        printf("factorial of %d = %d\n",n,factorial);
    }
}