#include <stdio.h>

// Pass by Value: modifying 'bonus' here does NOT affect 'gracePoints' in main
void attemptBonusReset(int bonus) {
    bonus = 0;
}

// Pass by Reference: modifies the actual array elements in main's memory
void applyGraceMarks(int marks[], int n, int bonus) {
    for (int i = 0; i < n; i++) {
        // Give grace marks only to students scoring between 35 and 39
        if (marks[i] >= 35 && marks[i] < 40) {
            marks[i] += bonus;
        }
    }
}

int main() {
    int n, marks[100], gracePoints = 5;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]); // e.g., 36 45 38 29 50
    }

    attemptBonusReset(gracePoints);
    applyGraceMarks(marks, n, gracePoints);

    printf("Grace Points variable in main: %d\n", gracePoints); // Still 5
    printf("Updated Marks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", marks[i]); // Becomes: 41 45 43 29 50
    }
    printf("\n");

    return 0;
}
