#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the record structure
struct record {
    int id;
    char name[50];
};

// Comparison function for qsort
int compare(const void *a, const void *b) {
    struct record *recordA = (struct record *)a;
    struct record *recordB = (struct record *)b;
    return (recordA->id - recordB->id);
}

int main() {
    // Create an array of records
    struct record records[] = {
        {3, "Alice"},
        {1, "Bob"},
        {4, "Charlie"},
        {2, "David"}
    };

    int n = sizeof(records) / sizeof(records[0]);

    // Sort the array using qsort
    qsort(records, n, sizeof(struct record), compare);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s\n", records[i].id, records[i].name);
    }

    return 0;
}
