#include<stdio.h>
void fun (int*,int*);
void main(){
    int x=5,y=7;
    fun(&x,&y);
    printf("iside main(called Function)\n");
    printf("x=%d y=%d\n",x,y);
}

void fun(int* x,int* y){
    *x=7;
    *y=4;
    printf("inside fun(called function)\n");
    printf("x=%d y=%d\n",*x,*y);
}
