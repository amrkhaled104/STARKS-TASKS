#include<stdio.h>
float findSmallest(float num1, float num2, float num3);
int main() {
    float num1, num2, num3;

    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    float result = findSmallest(num1, num2, num3);

    printf("The smallest number is: %f\n", result);

    return 0;
}