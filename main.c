#include <stdio.h>
int main()
{
    int num1;
    float num2;
    const float MAX = 50.88;

    printf("Enter value number 1: ");
    scanf("%d", &num1);
    printf("\nEnter value number 2: ");
    scanf("%f", &num2);
    printf("\nEnter max value: ");
    scanf("%f",&MAX);
    printf("\n%d, %f, %f", num1, num2, MAX);
}