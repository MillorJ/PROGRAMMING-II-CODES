#include <stdio.h>
#include <string.h>
#define MAX 60

typedef struct {
	char Fname[24];
	char MI;
	char Lname[16];
}Nametype;

typedef struct {
	int iD;
	Nametype sName;
	char course[8];
	int yrLevel;
}StudRec;

typedef struct {
	StudRec studs[MAX];
	int ctr;
}StudList;

int main()
{
	StudList L;
	
	L.studs[9].iD = 22104386;
	printf("Your id number is %d\n", L.studs[9].iD);
	strcpy(L.studs[9].sName.Lname, "Millor");
	printf("The last name of the 10th is %s\n", L.studs[9].sName.Lname);
	scanf("%d\n", &L.studs[9].yrLevel);
	printf("%d", L.ctr);
	
	return 0;
}

