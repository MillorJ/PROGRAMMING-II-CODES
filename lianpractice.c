#include <stdio.h>

int GetSum(float arr[]);

int main()
{
	float arr[] = {1.3, 1.4, 1.5, 1.6, 1.7};
	
	int A = GetSum(arr);
}

int GetSum(float arr[])
{
	int i;
	int size = 5;
	int sum;
	for (i = 0; i < size; i++){
		sum = sum + arr[i];
		printf("%f", sum);
}
return sum;
}
