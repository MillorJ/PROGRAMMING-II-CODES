#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* testFunction()
{
	int i;
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int* ReturnArr = (int*) malloc(sizeof(int) * size);
 	
 	for (i = 0; i < size; i++)
 	{
 		ReturnArr[i] = arr[i];
	 }
	 for (i = 0; i < size; i++)
	 {
	 	printf("%d ", ReturnArr[i]);
	 }
	 
	return ReturnArr;
}

int main()
{
	int i;
	int* arr = testFunction();
	
	
	return 0;
}
