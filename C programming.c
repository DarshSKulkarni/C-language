// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <string.h>


   struct student {
        int roll;
        float cgpa;
        char name [50];

       
   };

int main() {
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
   // s1.name = "darsh"
    strcpy(s1.name, "darsh");
        printf("student name: %s \n", s1.name);
        printf("student cgpa: %f \n", s1.cgpa);
        printf("student cgpa: %d \n", s1.roll);
    return 0;
}