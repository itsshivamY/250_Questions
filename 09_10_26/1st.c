#include<isdio.h>
int main(){
    struct student{
        int a ;
        char b ;
        float m;
    };
    struct student std;
    std.a = 10;
    printf(" %d \n",std.a);
}