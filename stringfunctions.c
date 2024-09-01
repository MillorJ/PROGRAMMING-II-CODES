#include <stdio.h>
#include <string.h>

int main() {
  char str1[50] = "Hello";
  char str2[50] = "World";
  char str3[50] = "C Programming";

  // strlen: calculates the length of a string
  printf("Length of str1: %d\n", strlen(str1));

  // strcmp: compares two strings
  if (strcmp(str1, str2) == 0) {
    printf("str1 and str2 are equal\n");
  } else {
    printf("str1 and str2 are not equal\n");
  }

  // strcpy: copies a string from one variable to another
  strcpy(str1, str2);
  printf("str1 after copying from str2: %s\n", str1);

  // strcat: concatenates two strings
  strcat(str1, str2);
  printf("str1 after concatenation: %s\n", str1);

  // strrev: reverses a string
  printf("str3 before reversal: %s\n", str3);
  strrev(str3);
  printf("str3 after reversal: %s\n", str3);

  // scanf: reads input from the user
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("You entered: %d\n", num);

  // gets: reads a string from the user
  char str4[50];
  printf("Enter a string: ");
  scanf(" %[^\n]s", &str4);
  printf("You entered: %s\n", str4);

  // printf: prints output to the console
  printf("Hello, World!\n");

  // puts: prints a string to the console followed by a newline character
  puts("Hello, World!");

  return 0;
}

