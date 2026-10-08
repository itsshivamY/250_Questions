#include <stdio.h>

int avg(int[], int);

int main()
{
    int marks[] = {10, 30, 15, 13, 69, 47};
    int size, average;

    size = sizeof(marks) / sizeof(marks[0]);

    average = avg(marks, size);

    printf("Average = %d\n", average);

    printf("Inside main, size of array is (in bytes): %zu\n", sizeof(marks));

    return 0;
}

int avg(int marks1[], int size)
{
    int i, sum = 0, average;

    for (i = 0; i < size; i++)
    {
        sum = sum + marks1[i];
    }

    average = sum / size;

    printf("Inside avg function, size of marks1 is (in bytes): %zu\n",
           sizeof(marks1));

    return average;
}