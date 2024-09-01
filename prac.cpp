#include <stdio.h>

void SelectionSort(int arr[], int size);

int main()
{
	int arr[]= {2,7,4,1,5,3};
	int size = 6;
	int i;
	SelectionSort(arr, size);
	for (i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}

void SelectionSort(int arr[], int size)
{
	int i,j;
	for (i = 0; i < size - 1; i++)
	{
		int iMin = i;
		for (j = i+1; j < size; j++)
		{
			if (arr[j] < arr[iMin])
			{
				iMin = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[iMin];
		arr[iMin] = temp;
	}
}

