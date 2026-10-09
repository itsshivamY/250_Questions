#include<stdio.h>
int main(){
    int a[5],b[5],c[5],i;
    
    for (i=0;i<5;i++){
        printf("enter first array elements: ");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++){
        printf("enter second array elements: ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        c[i]=a[i]+b[i];
        printf("\n third array element at index %d is : %d \n",i,c[i]);
    }
}