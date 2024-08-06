#include "../include/linked_list.h"
#include "../include/utilities.h"
#include "../include/student.h"
#include <stdlib.h>

struct Node* head = NULL;

void addStudent_linkedList(const struct student* const ptr)
{

	if(studentIDExists(ptr->id))
	{
		printf("ID already exists.\n");
		return;
	}

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	if(newNode == NULL)
	{
		printf("Error in Allocating New Student!\n");
		return;
	}

	newNode->data.id = ptr->id;
	newNode->data.gpa = ptr->gpa;
	newNode->data.age = ptr->age;
	strcpy(newNode->data.name, ptr->name);

	newNode->next = NULL;

	if(head == NULL)
	{
		head = newNode;
		return;
	}

	struct Node* current = head;

	while(current->next != NULL)
	{
		current = current->next;
	}

	current->next = newNode;
}

void displayStudents(void)
{
	if(head == NULL)
	{
		printf("Students Data Is Empty.");
		return;
	}

	struct Node* current = head;

	while(current != NULL)
	{
		printStudentData(&current->data);
		current = current->next;
	}
}

void searchStudentByID_linkedList(uint32 id)
{
	if(head == NULL)
	{
		printf("Students Data Is Empty.");
		return;
	}

	struct Node* target = head;

	while(target != NULL)
	{
		if(target->data.id == id)
		{
			printStudentData(&target->data);
			return;
		}
		target = target->next;
	}

	printf("User With ID %ld Not Found!", id);

}

void updateStudent_linkedList(uint32 id)
{
	struct Node* temp = head;

	while(temp != NULL)
	{
		if(temp->data.id == id)
		{
			break;
		}
		temp = temp->next;
	}

	if(temp == NULL)
	{
		printf("User With ID %ld Not Found!", id);
		return;
	}

	printf("Enter New Name : \n");
	// scanf("%s", temp->data.name);

	// To accept inputs with spaces from user.
	while(getchar() != '\n');
	fgets(temp->data.name, sizeof(temp->data.name), stdin);
	size_t len = strlen(temp->data.name);

	if(len > ZERO && temp->data.name[len - 1] == '\n')
	{
		temp->data.name[len - 1] = '\0';
	}

	printf("Enter New Age : \n");
	scanf("%ld", &temp->data.age);

	printf("Enter New GPA : \n");
	scanf("%f", &temp->data.gpa);

	printf("Student %ld Updated Successfully.\n", id);

}

void deleteStudent_linkedList(uint32 id)
{
	struct Node* temp = head;
	struct Node* prev = NULL;

	// deleting head
	if(temp != NULL && temp->data.id == id)
	{
		head = temp->next;
		free(temp);
		printf("Student with ID %ld Deleted Successfully.", id);
		return;
	}

	while((temp != NULL) && (temp->data.id != id))
	{
		prev = temp;
		temp = temp->next;
	}

	if(temp == NULL)
	{
		printf("Student With ID %ld Not Found!", id);
		return;
	}

	prev->next = temp->next;
	free(temp);

	printf("Student with ID %ld Deleted Successfully.", id);
}

float32 calculateAverageGPA_linkedList(void)
{
	if(head == NULL)
	{
		printf("Students Data is Empty.\n");
		return (0.0);
	}

	struct Node* temp = head;

	uint32 count = 0;
	float32 sum = 0.0;

	while(temp != NULL)
	{
		sum += temp->data.gpa;
		count++;
		temp = temp->next;
	}

	return ((float)sum / (float)count);

}

void searchHighestGPA(void)
{

	if(head == NULL)
	{
		printf("Students Data Is Empty.");
		return;
	}

	struct Node* temp = head;
	struct Node* maxGPASt = temp;
	float32 maxGPA = temp->data.gpa;


	while(temp != NULL)
	{
		float32 tempGPA = temp->data.gpa;

		if(tempGPA > maxGPA)
		{
			maxGPA = tempGPA;
			maxGPASt = temp;
		}

		temp = temp->next;
	}

	printf("Max GPA is %0.1f : \n", maxGPA);
	printStudentData(&maxGPASt->data);

}

void printStudentData(const struct student* const ptr)
{
	printf("[ ID : %ld | Name : %s | Age : %ld | GPA : %.1f ]\n",
		ptr->id,
		ptr->name,
		ptr->age,
		ptr->gpa
	);
}

bool studentIDExists(uint32 id)
{
	struct Node* temp = head;

	while(temp != NULL)
	{
		if(temp->data.id == id)
			return true;
		temp = temp->next;
	}
	return false;
}



