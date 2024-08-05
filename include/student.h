#ifndef STUDENT_H
#define STUDENT_H

#include "utilities.h"

struct student
{
	uint32 id;
	char name[50];
	uint32 age;
	float32 gpa;
};

void addStudent_menu(void);
void searchStudentByID_menu(void);
void updateStudent_menu(void);
void deleteStudent_menu(void);
void calculateAverageGPA_menu(void);

#endif // STUDENT_H
