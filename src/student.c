#include "../include/student.h"
#include "../include/utilities.h"
#include "../include/linked_list.h"

void addStudent_menu(void)
{

	struct student newSt;

	char name[50];
	printf("Enter Student name : \n");

    // To accept inputs with spaces from user.
    while (getchar() != '\n');
    fgets(name, sizeof(name), stdin);
    size_t len = strlen(name);

    if (len > ZERO && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
    }

	uint32 id;
	printf("Enter Student ID : \n");
	scanf("%ld", &id);

	uint32 age;
	printf("Enter Student Age : \n");
	scanf("%ld", &age);

	float32 gpa;
	printf("Enter Student GPA : \n");
	scanf("%f", &gpa);

	newSt.id = id;
	newSt.gpa = gpa;
	newSt.age = age;
	strcpy(newSt.name, name);

	addStudent_linkedList(&newSt);

}

void searchStudentByID_menu(void)
{

	uint32 id;
	printf("Enter Student ID : ");
	scanf("%ld", &id);

	searchStudentByID_linkedList(id);

}

void updateStudent_menu(void)
{
	uint32 id;
	printf("Enter Student ID : \n");
	scanf("%ld", &id);

	updateStudent_linkedList(id);
}

void deleteStudent_menu(void)
{
	uint32 id;
	printf("Enter Student ID to delete : \n");
	scanf("%ld", &id);

	deleteStudent_linkedList(id);
}

void calculateAverageGPA_menu(void)
{
	float32 avgGPA = calculateAverageGPA_linkedList();
	printf("Average GPA Of Students : %.2f\n", avgGPA);

}



