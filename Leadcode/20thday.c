#include <stdio.h>

struct Student {
    char name[20];
    int rollNo;
    int age;
    char gender;
    int mark;
};

int main()
{
    struct Student s[5];
    int max = 0, min = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Student %d details:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Gender: ");
        scanf(" %c", &s[i].gender);

        printf("Mark: ");
        scanf("%d", &s[i].mark);
    }

    for (int i = 1; i < 5; i++)
    {
        if (s[i].mark > s[max].mark)
            max = i;

        if (s[i].mark < s[min].mark)
            min = i;
    }

    printf("\nMaximum Mark Student:\n");
    printf("Name: %s\n", s[max].name);
    printf("Roll No: %d\n", s[max].rollNo);
    printf("Age: %d\n", s[max].age);
    printf("Gender: %c\n", s[max].gender);
    printf("Mark: %d\n", s[max].mark);

    printf("\nMinimum Mark Student:\n");
    printf("Name: %s\n", s[min].name);
    printf("Roll No: %d\n", s[min].rollNo);
    printf("Age: %d\n", s[min].age);
    printf("Gender: %c\n", s[min].gender);
    printf("Mark: %d\n", s[min].mark);

    return 0;
}