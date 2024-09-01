#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World!";
    printf("Before memcpy, str1: %s, str2: %s\n", str1, str2);
    memcpy(str1, str2, 4);
    printf("After memcpy, str1: %s, str2: %s\n", str1, str2);
    return 0;
}

