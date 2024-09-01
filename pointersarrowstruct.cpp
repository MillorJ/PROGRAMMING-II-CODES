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
void getdata2(UserID *x);

int main(){
	printf("Version 1 \n\n");
	UserID A = getdata();
	display(&A);
	
	printf("\n\nVersion 2 \n\n");
	getdata2(&A);
	display(&A);
}

UserID getdata()
{
	UserID x;
	printf("First name: ");
	scanf(" %s", &x.fullname.fname);
	return x;
}

void display(UserID *x)
{
	printf("\nFirst name: %s", x->fullname.fname);
	
}
void getdata2(UserID *x)
{
	printf("First name: ");
	scanf(" %s", &x->fullname.fname);
}
