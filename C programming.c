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

    struct student s2;
    strcpy(s2.name, "palash");
    s2. roll =1663;
    s2. cgpa= 9.9;
    printf("name of student: %s \n", s2.name);
    printf("roll numebr of student: %d \n", s2. roll);
    printf("cgpa pointer of student: %f \n", s2. cgpa);


    struct student s3;
    strcpy(s3.name, "budabu");
    s3.roll = 1665;
    s3. cgpa = 7.9;
    printf("name of the student: %s \n", s3.name);    
    printf("roll number of the student: %d \n", s3.roll);    
    printf("cgpa pointer of the student: %f \n", s3.cgpa);    






    return 0;


}