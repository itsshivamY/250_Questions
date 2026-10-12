devesh@DEVESH-PC:~/250_Questions/string$ gcc 6th.c
6th.c: In function ‘main’:
6th.c:8:17: error: implicit declaration of function ‘tolower’ [-Wimplicit-function-declaration]
    8 |         s1[i] = tolower((unsigned char)s1[i]);
      |                 ^~~~~~~
6th.c:3:1: note: include ‘<ctype.h>’ or provide a declaration of ‘tolower’
    2 | #include<string.h>
  +++ |+#include <ctype.h>
    3 | void main(){
devesh@DEVESH-PC:~/250_Questions/string$ gcc 6th.c
devesh@DEVESH-PC:~/250_Questions/string$ ./a.out
Enter string: DevesH
string is: devesh