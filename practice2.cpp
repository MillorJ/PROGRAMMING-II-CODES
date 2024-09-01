#include <stdio.h>
#include <string.h>

typedef struct {
	char fname[24];
	char Mi;
	char lname[16];
}name;

typedef struct {
	name fullname;
	char email[20];
	int age;
	char gender;
	unsigned int IDno;
}UserID;

UserID getdata();
void display(UserID *x);

int main()
{
	UserID result;
	result = getdata();
	display(&result);
	
}

UserID getdata()
{
	UserID x;
	printf("Enter first name?: ");
	scanf(" %s", &x.fullname.fname);
	printf("What is your last name?: ");
	scanf(" %s", &x.fullname.lname);
	
	return x;
}
void display(UserID *x)
{
	printf("the name is: %s\n", x->fullname.fname);
	printf("your last name is: %s", x->fullname.lname);
}
