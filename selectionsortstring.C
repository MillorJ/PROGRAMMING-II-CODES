#include <stdio.h>
#include <string.h>

void selection_sort(char *arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        // Swap the minimum element with the first element in the unsorted part of the array
        char *temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
        // Print the current state of the array after each iteration
        printf("Iteration %d: ", i+1);
        for (j = 0; j < n; j++) {
            printf("%c", *arr[j]);
        }
        printf("\n");
    }
}

int main() {
    char *arr[] = {"D", "S", "A", "B", "C", "L"};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%c", *arr[i]);
    }
    printf("\n");
    selection_sort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%c", *arr[i]);
    }
    printf("\n");
    return 0;
}

