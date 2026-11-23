#include <stdio.h>

int main() {
    char fullName[50];
    char alphaOnly[50];

    // 1. Read a full name containing spaces until Enter ('\n') is pressed
    printf("Enter Full Name: ");
    scanf(" %[^\n]", fullName); // Leading space clears any prior '\n'

    // 2. Read only alphabets and spaces (stops as soon as a number/symbol is typed)
    printf("Enter City Name (stops at digits): ");
    scanf(" %[A-Za-z ]", alphaOnly);

    printf("Full Name : %s\n", fullName);
    printf("City Name : %s\n", alphaOnly);

    return 0;
}
