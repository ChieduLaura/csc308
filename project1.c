//Code to determine if a person is eligible to vote
#include <stdio.h>
int main() 
{
    int age;

    printf("Enter your age here: ");
    scanf("%d", &age);

    if (age==18) {
        printf("You are eligible to vote, congratulations!\n");
    }
    else if (age > 18) {
        printf("You are eligible to vote, congratulations!\n");
    }
    else {
        printf("You are not old enough to vote, sorry\n");
    }
        return 0;
}