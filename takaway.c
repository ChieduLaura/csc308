#include <stdio.h>

int main() {
    char choice;
    printf("Enter 'c' for character, 'i' for integer, or 'f' for float: ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'c': {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);
            printf("Character: %c, ASCII: %d, Size: %lu bytes\n", ch, (int)ch, sizeof(ch));
            for (int i = 1; i <= 4; i++) {
                char nextChar = ch + i * 3;
                printf("Next %d: %c, ASCII: %d\n", i, nextChar, (int)nextChar);
            }
            break;
        }
        case 'i': {
            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);
            printf("Integer: %d, Size: %lu bytes\n", num, sizeof(num));
            for (int i = 1; i <= 4; i++) {
                printf("Next %d: %d\n", i, num + i * 3);
            }
            break;
        }
        case 'f': {
            float num;
            printf("Enter a float: ");
            scanf("%f", &num);
            printf("Float: %.2f, Size: %lu bytes\n", num, sizeof(num));
            for (int i = 1; i <= 4; i++) {
                printf("Next %d: %.2f\n", i, num + i * 3);
            }
            break;
        }
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}