#include <stdio.h>

#define MAX_STUDENTS 100

typedef struct {
    int ID;
    char name[50];
    int grade;
} student;

typedef struct {
    student arr[MAX_STUDENTS];
    int count;
} studList;

int getIdIfElementExists(studList L, int ID);

int main() {
    studList myList = { .arr = { { 12345, "Alice", 85 }, { 67890, "Bob", 92 }, { 24680, "Charlie", 78 } }, .count = 3 };
    int id = getIdIfElementExists(myList, 12345);
    if (id) {
        printf("Found element with ID %d\n", id);
    } else {
        printf("Element with ID %d not found\n", 12345);
    }
    return 0;
}

int getIdIfElementExists(studList L, int ID) {
    int i;
    int foundID = -1;
    for (i = 0; i < L.count; i++) {
        if (L.arr[i].ID == ID) {
            foundID = ID;
            break;
        }
    }
    return foundID;
}

