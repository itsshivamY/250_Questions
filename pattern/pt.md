* * * Complete Theory Notes

Pattern printing in C is a programming technique used to print 
different shapes using symbols (*), numbers, or alphabets with the help of loops.

1. What is Pattern Printing?
Pattern printing is the process of 
displaying data in a specific format using programming logic.

2. Why do we use Pattern Printing?
Pattern printing helps us develop:

-> Logical thinking and problem-solving skills.

-> Understanding of for, while, and do-while loops.

-> Understanding of nested loops.

-> Control over rows, columns, and spaces.

-> A foundation for more complex programming problems.

3. Basic Concepts Required
Before learning patterns, understand these concepts.


* A. printf()
The printf() function displays output on the screen.

* B. Newline (\n)
The \n escape sequence moves the cursor to the next line.

* C. for loop
A for loop repeats a block of code a specified number of times.

* D. Nested loop
A loop inside another loop is called a nested loop.
Pattern printing generally uses nested loops.

* Here:
-> Outer loop (i) controls the rows.
-> Inner loop (j) controls the items printed in each row.
-> printf("\n") moves to the next row after the inner loop finishes.

4. The Basic Logic of Pattern Printing

    * Most beginner patterns follow these steps:

1. Decide how many rows are required.
2. Decide how many columns or items each row contains.
3. Use the outer loop for rows.
4. Use the inner loop for stars, numbers, alphabets, or spaces.
5. Use printf("\n") after each row.


5. Types of Pattern Printing

* Type 1: Square pattern
    * Logic: Every row contains the same number of stars.

* Type 2: Right-angled triangle
    * Logic: The number of stars increases with each row.

* Type 3: Inverted triangle    
    * Logic: The number of stars decreases with each row.

* Type 4: Number triangle
    * Logic: Print the value of j instead of a star.

* Type 5: Repeated number triangle
    * Logic: Print the row number i in the inner loop.

* Type 6: Alphabet triangle
    * Logic: Use %c to print characters. The character 'A' + j - 1 produces successive letters.

6. Pyramid Patterns and Spaces
    * Some patterns require spaces before stars to make the shape appear centered.


=> A pyramid generally uses two inner loops:
-> The first loop prints spaces.
-> The second loop prints stars.
* For a centered pyramid with n rows, a common formula is:
-> Spaces in row i: n - i
-> Stars in row i: 2 * i - 1    

7. How to solve any pattern question
Follow this method whenever you see a new pattern.

1. Count the rows
How many lines are printed?

2. Count the items in each row
Are stars or numbers increasing, decreasing, or staying constant?

3. Identify the loop conditions
Choose the starting value, ending condition, and increment or decrement.

4. Trace and test
Write down the values of i and j for each row, then compare the output with the required pattern.

8. Common mistakes *** 

    1. Using j <= 4 instead of j <= i when the number of items must increase with each row.

    2. Forgetting printf("\n"), causing all rows to appear on one line.

    3. Using the wrong variable in printf(), such as printing i when the pattern requires j.

    4. Incorrect loop boundaries, which can cause extra or missing rows.

    5. Forgetting that spaces matter in pyramid patterns.

    6. Mixing up the outer loop and inner loop responsibilities.

* * * * Final revision * * * * 
Concept	Main    -------      purpose
Outer loop	   -----     Controls rows
Inner loop	   ------     Controls items within each row
printf("* ")	------        Prints a star
printf("%d ", j)	 ------       Prints a number
printf("%c ", ch)	  -----       Prints a character
printf("\n")	 -------      moves to the next line
Space loop	   ------     Aligns patterns and creates pyramids


* * The most important rule: Understand how the number of items changes from one row to the next. Once you can identify that rule, writing the nested loops becomes much easier.