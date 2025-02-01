#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (i=0; i<=2; ++i)
        printf("Right shift by %d: %d\n", i, num>>i);

    printf("\n");

    for (i=0; i<=2; ++i)
    printf("Left shift by %d: %d\n", i, num<<i);

    return 0;
}