#include<stdio.h>
int sum(int a, int b);

int main () {
    int a, b;
    printf("please enter your first number");
    scanf("%d", & a);
    printf("please enter your second number");
    scanf("%d", & b);
int sum(int a, int b);
        int s = sum(a,b);
printf("sum is %d", s);
return 0; }

int sum(int x, int y) {
    return y+x;
}