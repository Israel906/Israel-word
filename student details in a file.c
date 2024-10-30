#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "students.dat"

// Structure to store student data
typedef struct {
    char name[50];
    int marks;
} Student;

// Function to read and store data of 5 students
void writeFiveStudents() {
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    fwrite(students, sizeof(Student), 5, file);
    fclose(file);
    printf("Data of 5 students written to file.\n");
}

// Function to read and store data of 'n' students, appending if file exists
void writeNStudents(int n) {
    FILE *file = fopen(FILE_NAME, "a");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        perror("Memory allocation failed");
        fclose(file);
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    fwrite(students, sizeof(Student), n, file);
    fclose(file);
    free(students);
    printf("Data of %d students appended to file.\n", n);
}

// Function to read and display all student data from file
void readAllStudents() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    Student student;
    printf