#include <stdio.h>

int main() {
    printf("Hello\tWorld\n");  // Tab and newline
    printf("Hello\bWorld\n");  // Backspace and newline
    printf("Hello\"World\"\n");  // Double quotes and newline
    printf("Hello\\World\n");  // Backslash and newline
    printf("Hello\rWorld\n");  // Carriage return and newline
    printf("\a");  // Bell sound
    return 0;
}