#include <stdio.h>

int main() {
    int age;
    char experience;
    int salary;

    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you experienced? (y/n): ");
    scanf(" %c", &experience);

    // Determine salary based on experience and age
    if (experience == 'y' || experience == 'Y') {
        if (age >= 40) {
            salary = 560000;
        } else if (age >= 30 && age < 40) {
            salary = 480000;
        } else if (age < 28) {
            salary = 300000;
        } else {
            salary = 0; // Default case (not specified but for safety)
        }
    } else {
        salary = 100000;
    }

    // Display the result
    if (salary != 0) {
        printf("Your salary is: N%d\n", salary);
    } else {
        printf("Invalid inputs. Please check the criteria.\n");
    }

    return 0;
}
