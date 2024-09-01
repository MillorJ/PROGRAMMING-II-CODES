#include <stdio.h>
#include <string.h>

void insertion_sort(char *arr[], int n) {
    int i, j;
    char *key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        // Move elements that are greater than key to one position ahead of their current position
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        // Print the current state of the array after each iteration
        printf("Iteration %d: ", i);
        for (int k = 0; k < n; k++) {
            printf("%s ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    char *arr[] = {"A", "S", "M", "P", "L", "E"};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
    insertion_sort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
    return 0;
}

