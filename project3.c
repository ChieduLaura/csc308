#include <stdio.h>

int main() {
    char inputChar;

    // Prompt user for input
    printf("Enter a character between A and J: ");
    scanf(" %c", &inputChar);

    // Validate input
    if ((inputChar < 'A' || inputChar > 'J') && (inputChar < 'a' || inputChar > 'j')) {
        printf("Invalid input! Please enter a character between A and J (case insensitive).\n");
        return 1;
    }

    // Normalize to uppercase for consistent output
    if (inputChar >= 'a' && inputChar <= 'j') {
        inputChar = inputChar - ('a' - 'A');
    }

    // Print the next 6 characters
    printf("The next 6 characters are: ");
    for (int i = 1; i <= 6; i++) {
        printf("%c ", inputChar + i);
    }
    printf("\n");

    return 0;
}
