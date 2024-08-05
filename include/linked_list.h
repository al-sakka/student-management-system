#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "student.h"
#include "utilities.h"

struct Node
{
	struct student data;
	struct Node *next;
};

void addStudent_linkedList(const struct student *const ptr);
void displayStudents(void);
void searchStudentByID_linkedList(uint32 id);
void updateStudent_linkedList(uint32 id);
float32 calculateAverageGPA_linkedList(void);
void searchHighestGPA(void);
void deleteStudent_linkedList(uint32 id);
void printStudentData(const struct student *const ptr);
bool studentIDExists(uint32 id);


#endif

