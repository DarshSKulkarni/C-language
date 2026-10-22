// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int itemprice[3];
    printf("enter item1 price \n ");
    scanf("%d", & itemprice[0]);
    printf("enter item 2 price \n ");
    scanf("%d", & itemprice[1]);
    printf("enter item 3 price \n ");
    scanf("%d", & itemprice[2]);
    
    float itemsellingprices[3] = { itemprice[0]*1.18, itemprice[1]*1.18, itemprice[2]*1.18 } ;
    printf("%f, %f, %f", itemsellingprices[0], itemsellingprices[1], itemsellingprices[2]);
    return 0;
}