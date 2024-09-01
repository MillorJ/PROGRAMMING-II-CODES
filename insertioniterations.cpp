#include <stdio.h>
#include <string.h>

void insertion_sort(char *str, int n) {
    int i, j;
    char key;
    for (i = 1; i < n; i++) {
        key = str[i];
        j = i - 1;
        while (j >= 0 && str[j] > key) {
            str[j + 1] = str[j];
            j = j - 1;
        }
        str[j + 1] = key;

        // Print the current iteration
        printf("Iteration %d: %s\n", i, str);
    }
}

int main() {
    char str[] = "Feb14Prog2";
    int n = strlen(str);

    printf("Original string: %s\n", str);

    insertion_sort(str, n);

    printf("Sorted string: %s\n", str);

    return 0;
}

