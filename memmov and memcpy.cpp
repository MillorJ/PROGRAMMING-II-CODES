#include <stdio.h>
#include <string.h>

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[5];

  // memcpy: copies a block of memory from one location to another
  memcpy(arr2, arr1, sizeof(arr1));
  printf("arr2 after memcpy from arr1: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  // memmove: copies a block of memory from one location to another, handling overlapping blocks correctly
  memmove(arr1 + 2, arr1, 3 * sizeof(int));
  printf("arr1 after memmove: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  return 0;
}

