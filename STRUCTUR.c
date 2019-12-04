#include<stdio.h>
#include<conio.h>

void main() {
    clrscr();
    struct student {
        int rollno;
        float marks;
        char grade;
    };
    struct student s1, s2;
    printf("Enter information for student 1 \n");
    scanf("%d %f %c", &s1.rollno, &s1.marks, &s1.grade);
    printf("Enter information for student 2 \n");
    scanf("%d %f %c", &s2.rollno, &s2.marks, &s2.grade);
    if (s1.marks > s2.marks)
        printf("s1 with marks %f wins", s1.marks);
    else
        printf("S2 with marks %f wins", s2.marks);
    getch();
}