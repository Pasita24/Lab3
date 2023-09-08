#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int age;
    float promedio;
};
struct Libro
{
    char titulo[50];
    char autor[50];
    int ISBN;
    float precio;
};


// Function to display student information
void displayStudent(struct Student *student) {
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Promedio: %.2f\n", student->promedio);
    printf("\n");
}
void displayLibro(struct Libro *libro) {
    printf("Titulo: %s\n", libro->titulo);
    printf("Autor: %s\n", libro->autor);
    printf("ISBN: %d\n", libro->ISBN);
    printf("precio: %.2f\n", libro->precio);
    printf("\n");
}

int main() {

    struct Student students[5];

    //Variables 3 Ejercicio 
    struct Libro libros[5];

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
    //<-----------------Ejercicio 4-------------------->

    strcpy(libros[0].titulo, "El Gran Gatsby");
    strcpy(libros[0].autor, "F. Scott Fitzgerald");
    libros[0].ISBN = 9781234567890;
    libros[0].precio = 15.99;

    strcpy(libros[1].titulo, "Cien anios de soledad");
    strcpy(libros[1].autor, "Gabriel Garcia Marquez");
    libros[1].ISBN = 9789876543210;
    libros[1].precio = 20.50;

    strcpy(libros[2].titulo, "Harry Potter y la piedra filosofal");
    strcpy(libros[2].autor, "J.K. Rowling");
    libros[2].ISBN = 9780439554930;
    libros[2].precio = 12.75;

    strcpy(libros[3].titulo, "1984");
    strcpy(libros[3].autor, "George Orwell");
    libros[3].ISBN = 9780451524935;
    libros[3].precio = 14.25;

    strcpy(libros[4].titulo, "Don Quijote de la Mancha");
    strcpy(libros[4].autor, "Miguel de Cervantes");
    libros[4].ISBN = 9788424123752;
    libros[4].precio = 18.00;

    for (int i = 0; i < 5; i++) {
        printf("Libro %d Details:\n", i + 1);
        displayLibro(&libros[i]);
    }
    return 0;
}

