#include <stdio.h>
#include <string.h>


typedef struct 
{
	char name[12];
	char color[10];
	int age;
	
}dog;

dog printalldogs(dog dog1, dog dog2, dog dog3, dog dog4, dog dog5, dog dog6);

int main()
{
	dog dog1 = {"chelsie", "blue", 4};
	dog dog2 = {"\nmark", "white",  5};
	dog dog3 = {"\nzyguel", "brown",  6};
	dog dog4 = {"\ntina", "black", 7};
	dog dog5 = {"\nmaria", "orange", 9};
	dog dog6 = {"\nvince", "neon", 10};
	
	dog dogs = printalldogs(dog1,dog2,dog3,dog4,dog5,dog6);
	
	return 0;
}

dog printalldogs(dog dog1, dog dog2, dog dog3, dog dog4, dog dog5, dog dog6){
	
	int i;
	dog dogs[] = {dog1, dog2, dog3, dog4, dog5, dog6};
	
	for(i = 0; i < sizeof(dogs)/sizeof(dogs[0]); i++)
	{
		printf("%s", dogs[i].name);
		printf(" %s",dogs[i].color);
		printf("  %d", dogs[i].age);
	}
}

