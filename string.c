#include <stdio.h>
#include <string.h>

int CompareString(char str[]);

int main()
{
	char str[] = {"SASDA12"};
	int size = strlen(str);
	
	int A = CompareString(str);
	printf("%d", A);
	
	return 0;
	
}
int CompareString(char str[])
{
	int i;
	int found = 0;
	int size = strlen(str);
	for (i = 0; i < size; i++)
	{
		if (str[i] < str[i+1])
		{
			found = 1;
		}
		else 
			found = 0;
	}
	return found;
}
