#include <stdio.h>


struct 
{
	char *logo;
} sun1, sun2;

int main()
{
	sun1.logo = "SUN 11111";
	sun2.logo = "SUN 2222";
	printf("%s\n", sun1.logo);
	printf("%s", sun2.logo);
	return 0;
}
