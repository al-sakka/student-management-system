#include "../include/utilities.h"
#include "../include/student.h"
#include "../include/menu.h"
#include "../include/linked_list.h"

int MainMenu(void)
{
	uint8 user_option;

	while(true)
	{
		divider();
		printMenu();
		divider();
		printf("Enter Your Option : ");
		scanf("%hhd", &user_option);
		divider();

		switch(user_option)
		{
			case 1:
				addStudent_menu();
				break;
			case 2:
				displayStudents();
				break;
			case 3:
				searchStudentByID_menu();
				break;
			case 4:
				updateStudent_menu();
				break;
			case 5:
				deleteStudent_menu();
				break;
			case 6:
				calculateAverageGPA_menu();
				break;
			case 7:
				searchHighestGPA();
				break;
			default:
				printf("Exiting Program..\n");
				return 0;
		}
	}

}

void printMenu(void)
{
	printf("Options : \n");
	printf("1- Add Student.\n");
	printf("2- Display All Students.\n");
	printf("3- Search For Student by ID.\n");
	printf("4- Update Student Info.\n");
	printf("5- Delete Student.\n");
	printf("6- Calculate Average GPA.\n");
	printf("7- Find Student With Highest GPA.\n");
	printf("8- EXIT.\n");
}

void divider(void)
{
	printf("\n-------------------------------------\n");
}
