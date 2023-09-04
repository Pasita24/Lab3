#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int age;
    float promedio;
};

// Function to display student information
void displayStudent(struct Student *student) {
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Promedio: %.2f\n", student->promedio);
    printf("\n");
}

int main() {
    // Array of structure to store information for five students
    struct Student students[5];

    // Populate information for five students
    strcpy(students[0].name, "Jose");
    students[0].age = 22;
    students[0].promedio = 3.2;

    strcpy(students[1].name, "Fabian");
    students[1].age = 18;
    students[1].promedio = 3.7;

    strcpy(students[2].name, "Roberto");
    students[2].age = 26;
    students[2].promedio = 4.1;

    strcpy(students[3].name, "Lukas");
    students[3].age = 22;
    students[3].promedio = 4.4;

    strcpy(students[4].name, "Leonor");
    students[4].age = 21;
    students[4].promedio = 5.1;
    // Display student details using a loop
    for (int i = 0; i < 5; i++) {
        printf("Student %d Details:\n", i + 1);
        displayStudent(&students[i]);
    }

    // Find the student with the highest promedio
    float PromedioMasAlto = students[0].promedio;
    int highestPromedioIndex = 0;

    for (int i = 1; i < 5; i++) {
        if (students[i].promedio > highestPromedioIndex) {
            PromedioMasAlto = students[i].promedio;
            highestPromedioIndex = i;
        }
    }

    printf("el estudiante con mayor promedio:\n");
    displayStudent(&students[highestPromedioIndex]);

    return 0;
}

