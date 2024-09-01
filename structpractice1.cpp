#include <stdio.h>

struct student {
	int rollno;
	char name[12];
	int age;
	int marks;
};


int main()
{
	struct student student1 = {12, "John", 8, 15};
	printf("%d, %s, %d, %d", student1.rollno, student1.name, student1.age, student1.marks);
	return 0;
}
