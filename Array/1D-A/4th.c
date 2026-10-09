#include<stdio.h> 
void main(){
    int a[10],i;
    int even=0,odd=0;
    printf("\nEnter array elements:");
    for(i=0;i<10;i++){
        printf("Enter array elements: ");
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("total even number are : %d \n",even);
    printf("total odd number are : %d \n",odd);
}