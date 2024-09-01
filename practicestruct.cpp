#include <stdio.h>

typedef struct{
	 char Fname[24];
	 char MI;
	 char LN[16];
	 int age;
	 char gender;
}structureType;

structureType getData();
void display(structureType S);




structureType getData(){
	structureType stud1;
	printf("Enter your first name: ");
	scanf(" %s", &stud1.Fname);
	printf("Enter your middle initial: ");
	scanf(" %c", &stud1.MI);
	printf("Enter your last name: ");
	scanf(" %s", &stud1.LN);
	printf("Enter your age: ");
	scanf(" %d", &stud1.age);
	printf("Enter y	our gender: ");
	scanf(" %c", &stud1.gender);
	
	return stud1;
}

void display(structureType *S){
	printf("\n");
	printf("My first name: %s\n", S->Fname);
	printf("My middle initial is: %c\n", S->MI);
	printf("My last name is: %s\n", S->LN);
	printf("My age is: %d\n", S->age);
	printf("My gender is: %c\n", S->gender);
}

int main()
{
	structureType data;
	data = getData();
	 display(&data);
	
}
