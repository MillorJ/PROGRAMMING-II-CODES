#include <stdio.h>
#include <string.h>


typedef struct
{
	char name[12];
	int age;
}student;

student printstudentsinfo(student stud1, student stud2, student stud3, student stud4);

int main()
{
	int i;
	 student stud1 = {"johnrey", 19} ;
	 student stud2 = {"\njules", 19};
	student stud3 = {"\nian", 19};
	 student stud4 = {"\nachille", 19};
	
	student students = 	printstudentsinfo(stud1,stud2,stud3,stud4);
	return 0;
}

student printstudentsinfo(student stud1, student stud2, student stud3, student stud4){
	
	int i;
	student students[] = {stud1, stud2, stud3, stud4};
	
	for(i = 0; i < sizeof(students)/sizeof(students[0]); i++)
	{
		printf("%s", students[i].name);
		printf(" %d", students[i].age);
	}
	
}
