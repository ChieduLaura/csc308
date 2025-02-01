#include <stdio.h>

int main() {
    int grade, new_grade;
    printf("Enter grade: ");
    scanf("%d", &grade);

    new_grade = grade;
    printf("New grade = %d\n", new_grade);
    new_grade += grade;
    printf("New grade plus grade = %d\n", new_grade);
    new_grade -= grade;
    printf("New grade minus grade = %d\n", new_grade);
    new_grade *= grade;
    printf("New grade multiply grade = %d\n", new_grade);
    new_grade /= grade;
    printf("New grade divide grade = %d\n", new_grade);
    new_grade %= grade;
    printf("New grade mod grade\n");
    printf("New grade =%d\n",new_grade);
    
    return 0;
}