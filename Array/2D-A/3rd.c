#include<stdio.h>
int main(){
    int a[3][3],i,j,sumRow,sumCol;
    
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter matrix element : ");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        sumRow=sumCol=0;
        for(j=0;j<3;j++){
            sumRow=sumRow+a[i][j];
            sumCol=sumCol+a[i][j];
        }
        printf("sumRow=%d, sumCol=%d \n",sumRow,sumCol);
    }
}