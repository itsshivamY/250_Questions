A 2D (Two-Dimensional) Array is an array that stores data in the form of rows and columns. It is similar to a table or a matrix.

1. Syntax
    int a[2][3];

* 2 represents the number of rows.
* 3 represents the number of columns
* Total elements = \(2 \times 3 = 6\).

4. How does it work?
-> i controls the rows
-> j controls the columns.

-> a[i][j] accesses an element at a specific row and column.

-> The outer for loop runs through the rows, and the inner for loop runs through the columns.

* For example, a[1][2] gives 60. Remember that array indexing starts at 0 in C