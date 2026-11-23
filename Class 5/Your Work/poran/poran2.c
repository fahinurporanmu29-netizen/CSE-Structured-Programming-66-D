#include <stdio.h>
#include <string.h>

int main() {
    // Compiler automatically appends '\0' (Total size = 6 bytes)
    char city[20] = "Dhaka";
    printf("Length of '%s' = %lu\n", city, strlen(city)); // Output: 5

    // Truncating a string early by inserting '\0'
    city[3] = '\0';
    printf("After inserting '\\0' at index 3: '%s' (Length = %lu)\n", city, strlen(city)); // Output: Dha (Length = 3)

    // DANGER: Character array WITHOUT '\0' (Not a valid C string)
    char broken[4] = {'T', 'e', 's', 't'};
    // strlen(broken) will keep reading garbage memory past 't' until it randomly hits a 0 byte!
    printf("Valid char array size: %lu bytes\n", sizeof(broken));

    return 0;
}
