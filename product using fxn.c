#include <stdio.h>
int prod(int a, int b){
    return a*b;
}
int main()
{
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Emter second number: ");
    scanf("%d", &num2);
    result=prod(num1, num2);
    printf("Product of two numbers is: %d", result);
    return 0;
}
