#include<stdio.h>
#define N 50
int main(){
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
    printf("enter rows and columns for first matrix: \n");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter first matrix: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter rows and columns for second matrix: \n");
    scanf("%d %d",&p,&q);
    // printf("\n Enter second matrix: \n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("Enter matrix elements: ");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nfirst matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Second matrix is : \n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p){
        printf("cannot multiply\n");
    }
    else{
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                sum=0;
                for(k=0;k<n;k++){
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }

        printf("Multiplication is : \n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
}