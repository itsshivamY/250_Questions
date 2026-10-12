#include<stdio.h>
int main(){
    int a[2][3],b[2][3],c[2][3],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter first matrix: ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter second matrix: ");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("first matrix is : ");
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Second matrix is : ");
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Third matrix is : ");
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}