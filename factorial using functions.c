#include <stdio.h>
int Factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n, result;
    printf("Enter the number you want factorial of: ");
    scanf("%d", &n);
    result=Factorial(n);
    printf("Factorial is: %d", result);
    return 0;
}
