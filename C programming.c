#include<stdio.h>
int main() {
    int i; int n;
    printf("please enter enter the number of natural numbers \n");
    scanf("%d",& n);
    (i=(n*(n+1))/2);
    printf("The sum of first %d natural numbers is %d \n", n, i);

    return 0;
}
