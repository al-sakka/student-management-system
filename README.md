# Student Management System

## Overview

The **Student Management System** is a C program designed to manage student information efficiently. It provides functionalities for adding new students, displaying all students, searching for a student by ID, updating student details, calculating the average GPA, and finding the student with the highest GPA. The system utilizes fundamental programming concepts including conditions, loops, strings, structs, and pointers, and leverages data structures such as linked lists.

## Features

- **Add a Student**: Collects and adds new student details to the system.
- **Display All Students**: Shows a list of all stored student records.
- **Search for a Student by ID**: Finds a specific student using their unique ID.
- **Update Student Information**: Updates details for an existing student identified by their ID.
- **Delete a Student**: Removes a student's record based on their ID.
- **Calculate Average GPA**: Computes and displays the average GPA of all students.
- **Find Student with Highest GPA**: Identifies and displays the student with the highest GPA.
- **Exit**: Terminates the program.

## Data Structure

All student data is stored consecutively in a linked list. Each node in the list is a structure containing the data needed for each student and a pointer to the next node in the linked list.

## Functions

### `int main(void)`

The entry point of the program. Displays the menu options, takes user input, and calls the corresponding function based on user selection. The menu loop continues until the user exits the program.

### `void addStudent(const struct student *const ptr)`

Collects new student details and adds them to the linked list. It checks if the student’s ID already exists, allocates memory for a new node, and adds the student data to the end of the list.

### `void displayStudents(void)`

Displays the details of all students currently in the system. If the list is empty, it prints a message indicating no students are present.

### `void searchStudentByID(int id)`

Searches for a student by their ID and displays their details if found. Prints a message if the student is not found.

### `void updateStudent(int id)`

Updates the details of a student with the given ID. If the student is found, it updates the student’s information; otherwise, it prints a message indicating the student was not found.

### `float calculateAverageGPA(void)`

Calculates and returns the average GPA of all students in the linked list. If the list is empty, it returns 0.0.

### `void searchHighestGPA(void)`

Finds and displays the student with the highest GPA. Prints a message if the list is empty.

### `void deleteStudent(int id)`

Deletes a student from the linked list by their ID. It adjusts the pointers to remove the node from the list, frees the memory allocated for the node, and prints a success message. If the student is not found, it prints a message indicating the student was not found.

## Usage

1. Compile the program using a C compiler (e.g., `gcc student_management_system.c -o sms`).
2. Run the executable (e.g., `./sms`).
3. Follow the on-screen menu to perform various operations on student records.

## Contributing

Feel free to open issues or submit pull requests to contribute to this project. Please ensure that any changes adhere to the coding standards and include tests if applicable.

Happy Coding <3
