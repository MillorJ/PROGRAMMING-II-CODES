#include <stdio.h>

typedef struct {
	char breed[10];
	char color[10];
	char name[10];
	int id;
} animal;

animal animals[200];

typedef animal Animals[100];


int main()
{
	animals[0].breed = "wfafdasdfsa";
	
	Animals x;
	
	for (int i = 0; i < 100; i++) {
		x[i].breed = "wefef";
	}
	
	
	
	return 0;
}

