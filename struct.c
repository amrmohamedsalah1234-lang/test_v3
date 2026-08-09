#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main(void) {
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}