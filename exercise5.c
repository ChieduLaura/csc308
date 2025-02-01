#include <stdio.h>

int main()  
{
    int int_1, int_2, int_3, result;
    printf("Enter an integer number: ");
    scanf("%d", &int_1);
    printf("Enter another integer number: ");
    scanf("%d", &int_2);
    printf("Enter the last integer number: ");
    scanf("%d", &int_3);

    result = (int_1 == int_2) && (int_3 > int_2);
    printf("(first_int == second_int) && (third_int > second_int) is %d\n", result);
    result = (int_1 == int_2) && (int_3 < int_2);
    printf("(first_int == second_int) && (third_int < second_int) is %d\n", result);
    result = (int_1 == int_2) || (int_3 > int_2);
    printf("(first_int == second_int) || (third_int > second_int) is %d\n", result);
    result = (int_1 != int_2) || (int_3 < int_2);
    printf("(first_int == second_int) || (third_int < second_int) is %d\n", result);
    result = !(int_1 != int_2);
    printf("!(first_int != second_int) is %d\n", result);
    result = !(int_1 == int_2);
    printf("!(first_int == second_int) is %d\n", result);

    return 0;
}