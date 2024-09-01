#include <stdio.h>

void selectionSort(int arr[], int size);

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  selectionSort(arr, n);

  printf("Sorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

void selectionSort(int arr[], int size)
{
	int i,j;
	for (i = 0; i < size-1; i++)
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
