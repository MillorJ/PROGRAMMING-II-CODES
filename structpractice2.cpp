#include <stdio.h>

struct student {
	int rollno;
	char name[30];
	int age;
};

int main()
{
	struct student students[5];
	int i;
	for (i = 0; i <= 4; i++)
	{
		printf("student %d\n", i + 1);
		students[i].rollno = i+1;
		printf("Enter name : ");
		scanf("%s", &students[i].name);
		printf("Enter age : ");
		scanf("%d", &students[i].age);
	}
	
		for (i = 0; i <= 4; i++)
		{
			if (students[i].rollno == 2)
			{
				printf("Students %d\n", i + 1);
				printf("\nRoll no: %d", students[i].rollno);
				printf("\nName: %s", students[i].name);
				printf("\nAge: %d", students[i].age);
			}
		}
	
	return 0;


}
