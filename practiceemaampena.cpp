#include <stdio.h>

typedef struct {
	char fname[24];
	char MI;
	char LN[16];
	int age;
	char gender;
}structureType;

structureType getData();
void display(structureType S);

int main()
{
	structureType data;
	data = getData();
	display(data);
}

structureType getData()
{
	structureType stud1;
	printf("Enter the first name: ");
	scanf("%s", &stud1.fname);
	printf("Enter the middle initial: ");
	scanf("%c", &stud1.MI);
	printf("Enter the last name: \n");
	scanf("%s", &stud1.LN);
	printf("Enter the gender: ");
	scanf("%c", &stud1.gender);
	
	return stud1;
}

void display(structureType S)
{
	printf("First name: %s", S.fname);
	printf("Middle Initial: %c", S.MI);
	printf("Last name: %s", S.LN);
	printf("age: %d", S.age);
	printf("gender: %c", S.gender);
	
}
