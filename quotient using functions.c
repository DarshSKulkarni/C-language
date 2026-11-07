#include <stdio.h>
int quotient(float a, float b){
    return a/b;
}
int main()
{
    float num1, num2, result;
    printf("Enter your dividend: ");
    scanf("%f", &num1);
    printf("Enter your divisor: ");
    scanf("%f", &num2);

    result=quotient(num1, num2);
    printf("Quotient is: %2f", result);
    return 0;
}
