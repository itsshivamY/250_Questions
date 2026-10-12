devesh@DEVESH-PC:~/250_Questions/Array/2D-A$ touch 5th.c
devesh@DEVESH-PC:~/250_Questions/Array/2D-A$ touch 5th.md
devesh@DEVESH-PC:~/250_Questions/Array/2D-A$ gcc 5th.c
5th.c: In function ‘main’:
5th.c:42:25: error: ‘l’ undeclared (first use in this function)
   42 |                 for(k=0;l<m;k++){
      |                         ^
5th.c:42:25: note: each undeclared identifier is reported only once for each function it appears in
devesh@DEVESH-PC:~/250_Questions/Array/2D-A$ gcc 5th.c
devesh@DEVESH-PC:~/250_Questions/Array/2D-A$ ./a.out
enter rows and columns for first matrix: 
 4
4
Enter first matrix: 
5
Enter first matrix: 
5^C
devesh@DEVESH-PC:~/250_Questions/Array/2D-A$ gcc 5th.c
devesh@DEVESH-PC:~/250_Questions/Array/2D-A$ ./a.out
enter rows and columns for first matrix: 
4
4
Enter first matrix: 4
Enter first matrix: 1
Enter first matrix: 5
Enter first matrix: 6
Enter first matrix: 1
Enter first matrix: 5
Enter first matrix: 8
Enter first matrix: 4
Enter first matrix: 9
Enter first matrix: 7
Enter first matrix: 5
Enter first matrix: 6
Enter first matrix: 5
Enter first matrix: 4
Enter first matrix: 4
Enter first matrix: 7
enter rows and columns for second matrix: 
4 
4
Enter matrix elements: 4
Enter matrix elements: 5
Enter matrix elements: 8
Enter matrix elements: 9
Enter matrix elements: 6
Enter matrix elements: 2
Enter matrix elements: 1
Enter matrix elements: 5
Enter matrix elements: 3
Enter matrix elements: 4
Enter matrix elements: 8
Enter matrix elements: 4
Enter matrix elements: 6
Enter matrix elements: 4
Enter matrix elements: 6
Enter matrix elements: 4

first matrix is:
4       1       5       6
1       5       8       4
9       7       5       6
5       4       4       7

 Second matrix is : 
Segmentation fault         ./a.out


* * * FIX BUG 

devesh@DEVESH-PC:~/250_Questions/Array/2D-A$ ./a.out
enter rows and columns for first matrix: 
3
3
Enter first matrix: 1
Enter first matrix: 5
Enter first matrix: 2
Enter first matrix: 1
Enter first matrix: 
3
Enter first matrix: 5
Enter first matrix: 4
Enter first matrix: 2
Enter first matrix: 4
enter rows and columns for second matrix: 
3
3
Enter matrix elements: 9
Enter matrix elements: 5
Enter matrix elements: 4
Enter matrix elements: 6 
Enter matrix elements: 3
Enter matrix elements: 2
Enter matrix elements: 1
Enter matrix elements: 4
Enter matrix elements: 7

first matrix is:
1       5       2
1       3       5
4       2       4

 Second matrix is : 
9       5       4
6       3       2
1       4       7
Multiplication is : 
41      28      28
32      34      45
52      42      48
devesh@DEVESH-PC:~/250_Questions/Array/2D-A$ 