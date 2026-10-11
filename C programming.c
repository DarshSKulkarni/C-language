// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void printTable();


int main() { 
    int n;
    printf("please enter your number");
    scanf("%d", & n);
    printTable(n);   //argument/actual parameter- calling 
    return 0;
}

int i;
void printTable(int n){ //formal parameter
    for (i=1; i<=10; i++)
        
{
    printf("%d \n", i*n); } }