#include <stdio.h>


void Bubblesort(int arr[], int size);


int main()
{
	int i;
	int arr[] = {5,8,4,2,6,7,1};
	int size = 7;
	
	Bubblesort(arr, size);
	for (i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	 
	
	return 0;
	
}

void Bubblesort(int arr[], int size)
{
	int i,j;
	for (i = size - 1; i >= 0; i--)
	{
		for (j = size - 1; j > size-i-1; j--)
		{
			if (arr[j] < arr[j-1])
			{
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
}

