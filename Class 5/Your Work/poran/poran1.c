#include <stdio.h>

int main() {
    // Method 1: Character Array (Modifiable copy in stack memory)
    char course[] = "CSE-101";

    // Method 2: String Literal Pointer (Read-only memory)
    const char *university = "DUET";

    // Allowed: modifying a character array
    course[0] = 'E';
    printf("Updated Course : %s\n", course); // Output: ESE-101

    // university[0] = 'B'; // DANGER: Causes runtime crash (Segmentation Fault)
    printf("University     : %s\n", university);

    // Re-pointing the pointer to a new literal IS allowed
    university = "BUET";
    printf("New University : %s\n", university);

    return 0;
}
