#include <stdio.h>
#include <string.h>

int check_sorted(char *str);

int main() {
  char str[] = "computer";
  int result = check_sorted(str);
  printf("Result: %d\n", result);
  return 0;
}

int check_sorted(char *str) {
  int i, size;
  size = strlen(str);
  for(i = 1; i < size; i++) {
    if(str[i] < str[i-1]) {
      return i;
    }
  }
  return -1;
}

