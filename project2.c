//Code to take 3 inputs in 3 subjects and calculate the total, average and percentage
#include <stdio.h>
int main()
{
    
    printf("Welcome\n");
    printf("Take care to remember that each score will be calculated out of a total of 10\n");

    float csc201, csc205, sta205;
    float total, average, percentage;

    printf("Enter marks for CSC 201: ");
    scanf("%f", &csc201);

    printf("Enter marks for CSC 205: ");
    scanf("%f", &csc205);

    printf("Enter marks for STA 205: ");
    scanf("%f", &sta205);

    //performing the calculations
    total =  csc201 + csc205 + sta205;
    average = total / 3;
    percentage = (total / 30) * 100; //Scores are out of ten

    //displaying results
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;

}