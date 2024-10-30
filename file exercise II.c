#include <stdio.h>
#include <stdlib.h>

// Function to write a sentence to data.txt
void writeToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(1);
    }
    
    char sentence[101];  // Array to store user input (up to 100 characters + null terminator)
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fputs(sentence, file) == EOF) {
        perror("Error writing to file");
        fclose(file);
        exit(1);
    }

    fclose(file);
}

// Function to read content from data.txt and display it
void readFromFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(1);
    }
    
    char ch;
    printf("Content of data.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    if (ferror(file)) {
        perror("Error reading from file");
        fclose(file);
        exit(1);
    }

    fclose(file);
}

// Function to append a sentence to data.txt
void appendToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        exit(1);
    }
    
    char sentence[101];  // Array to store user input (up to 100 characters + null terminator)
    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fputs(sentence, file) == EOF) {
        perror("Error appending to file");
        fclose(file);
        exit(1);
    }

    fclose(file);
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Write a sentence to data.txt\n");
        printf("2. Read content from data.txt\n");
        printf("3. Append a sentence to data.txt\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline character from input buffer

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}