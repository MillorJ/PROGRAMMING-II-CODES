#include <stdio.h>


typedef struct {
	char Fname[12];
	char Lname[12];
	int age;
	char gender;
}person;

person getdata();
void display(person *a);

int main()
{
	person A = getdata();
	display(&A);
	
	return 0;
}

person getdata()
{
	person x;
	printf("Enter the first name: ");
	scanf(" %s", &x.Fname);
	printf("Enter the last name: ");
	scanf(" %s", &x.Lname);
	printf("Enter age: ");
	scanf(" %d", &x.age);
	printf("Enter gender: ");
	scanf(" %c", &x.gender);
	
	return x;
}

void display(person *a)
{
	printf("\n\n\n");
	printf("Your first name is: %s\n", a->Fname);
	printf("Your last name is: %s\n", a->Lname);
	printf("Your age is: %d\n", a->age);
	printf("Your gender is: %c", a->gender);
}




