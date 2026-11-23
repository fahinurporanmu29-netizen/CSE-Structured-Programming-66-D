#include <stdio.h>

int main() {
    char dept[10] = "CSE";
    char batch[10] = "2026";
    char status[20] = "Enrolled";

    // Multiple string printing in a single formatted line
    printf("Department: %s | Batch: %s | Status: %s\n", dept, batch, status);

    // puts() prints a single string and automatically appends '\n'
    puts("--- End of Record ---");

    return 0;
}
