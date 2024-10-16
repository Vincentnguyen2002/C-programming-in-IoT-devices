#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// Function to write data to a CSV file
void save_to_csv(const char *filename, const char *name, float grade) {
    FILE *file = fopen(filename, "a"); // Open in append mode
    if (file == NULL) {
        printf("Error: Could not open file %s for writing.\n", filename);
        return;
    }

    // Write to CSV: Name, Grade
    fprintf(file, "%s,%.2f\n", name, grade);
    fclose(file);
}

int main() {
    char name[MAX_NAME_LENGTH];
    float grade;
    char choice;
    const char *filename = "students.csv";

    printf("Student Grades Recording System\n");

    while (1) {
        printf("Enter student's name: ");
        scanf("%s", name);

        // Input validation for grade
        while (1) {
            printf("Enter student's grade (0.0 - 100.0): ");
            scanf("%f", &grade);

            if (grade >= 0.0 && grade <= 100.0) {
                break; // Exit the loop if input is valid
            } else {
                printf("Invalid grade! Please enter a grade between 0.0 and 100.0.\n");
            }
        }

        // Save data to CSV file
        save_to_csv(filename, name, grade);
        printf("Data saved successfully!\n");

        // Ask user if they want to continue
        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice); // Space before %c to consume newline

        if (choice == 'n' || choice == 'N') {
            break; // Exit the loop if user chooses not to continue
        }
    }

    printf("Exiting the system. Data saved in %s\n", filename);
    return 0;
}
