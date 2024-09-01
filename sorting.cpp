#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubblesort(int arr[], int size);

int main(){
	
	int i;
	int size;
	int arr[50];
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	for(i = 0; i < size; i++){
		printf("Enter integer %d: ", i + 1);
		scanf("%d", &arr[i]);
	}	
	
			
	bubblesort(arr, size);
	for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	
return 0;

}



void bubblesort(int arr[], int size){
	int i;
	int j;
	
	for (i=0; i < size-1; i++){
		for (j=0; j < size-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			
		}
	}
}
}
