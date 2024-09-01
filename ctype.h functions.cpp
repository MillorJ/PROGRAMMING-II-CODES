#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';

    if (isalpha(c)) {
        printf("%c is an alphabetic character\n", c);
    }

    if (isdigit(c)) {
        printf("%c is a digit\n", c);
    }

    if (ispunct(c)) {
        printf("%c is a punctuation character\n", c);
    }

    if (isspace(c)) {
        printf("%c is a whitespace character\n", c);
    }

    if (isupper(c)) {
        printf("%c is an uppercase character\n", c);
    }

    if (islower(c)) {
        printf("%c is a lowercase character\n", c);
    }

    printf("The lowercase equivalent of %c is %c\n", c, tolower(c));
    printf("The uppercase equivalent of %c is %c\n", c, toupper(c));

    return 0;
}

