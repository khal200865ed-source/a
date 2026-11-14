#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_SUBJECTS 5
#define NAME_LENGTH 50

struct Student {
    char name[NAME_LENGTH];
    float marks[MAX_SUBJECTS];
    float average;
    char grade[3];
};

void calculateResult(struct Student *student) {
    float total = 0.0f;

    for (int i = 0; i < MAX_SUBJECTS; i++) {
        total += student->marks[i];
    }

    student->average = total / MAX_SUBJECTS;

    if (student->average >= 90)
        strcpy(student->grade, "A+");
    else if (student->average >= 80)
        strcpy(student->grade, "A");
    else if (student->average >= 70)
        strcpy(student->grade, "B");
    else if (student->average >= 60)
        strcpy(student->grade, "C");
    else if (student->average >= 50)
        strcpy(student->grade, "D");
    else
        strcpy(student->grade, "F");
}

int main(void) {
    struct Student students[MAX_STUDENTS];
    int numberOfStudents;

    printf("STUDENT GRADE MANAGEMENT SYSTEM\n");
    printf("--------------------------------\n");
    printf("Enter number of students (1-%d): ", MAX_STUDENTS);

    if (scanf("%d", &numberOfStudents) != 1 ||
        numberOfStudents < 1 || numberOfStudents > MAX_STUDENTS) {
        printf("Invalid number of students. Please run the program again.\n");
        return 1;
    }

    for (int i = 0; i < numberOfStudents; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter student name: ");
        scanf(" %49[^\n]", students[i].name);

        for (int j = 0; j < MAX_SUBJECTS; j++) {
            do {
                printf("Enter marks for Subject %d (0-100): ", j + 1);

                if (scanf("%f", &students[i].marks[j]) != 1) {
                    printf("Invalid input. Please enter a number.\n");
                    return 1;
                }

                if (students[i].marks[j] < 0 || students[i].marks[j] > 100) {
                    printf("Marks must be between 0 and 100. Try again.\n");
                }
            } while (students[i].marks[j] < 0 || students[i].marks[j] > 100);
        }

        calculateResult(&students[i]);
    }

    printf("\n\nSTUDENT RESULT SUMMARY\n");
    printf("-----------------------------------------------------------------------\n");
    printf("%-20s %10s %12s\n", "Student Name", "Average", "Grade");
    printf("-----------------------------------------------------------------------\n");

    for (int i = 0; i < numberOfStudents; i++) {
        printf("%-20s %10.2f %12s\n",
               students[i].name,
               students[i].average,
               students[i].grade);
    }

    printf("-----------------------------------------------------------------------\n");
    return 0;
}
