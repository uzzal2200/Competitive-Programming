#include <stdio.h>

// Define a structure for a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare an array of structures to store 5 students' information
    struct Student students[5];

    // Getting information for 5 students
    printf("Enter information for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Displaying information for 5 students
    printf("\nDisplaying information of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
