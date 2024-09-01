#include <stdio.h>


typedef struct {
	char name[12];
	int age;
}Person;


Person Getdata()
{
	Person p;
	printf("Enter the name: ");
	scanf(" %s", &p.name);
	return p;
		
}
void display(Person *x)
{
	printf("Your name is: %s", x.name);
	
}

int main ()
{
	Person X = Getdata();
	display(&X);
}
