#include <stdio.h>
int Remainder(int a, int b){
    return a%b;
}
int main()
{
    int num1, num2, result;
    printf("Enter your dividend: ");
    scanf("%d", &num1);
    printf("Enter your divisor: ");
    scanf("%d", &num2);

    result=Remainder(num1, num2);
    printf("Remainder is: %d", result);
    return 0;
}
