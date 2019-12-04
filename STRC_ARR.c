#include<stdio.h>
#include<conio.h>

struct student {
    int rollno;
    char grade;
    float marks;
};

void main() {
    int n = 3, i;
    struct student s[3];
    float x;
    clrscr();
    printf("Enter information for students \n");
    for (i = 0; i < n; i++) {
        printf("Enter rollno \n");
        scanf("%d", &s[i].rollno);
        printf("Enter grade \n");
        scanf("%c", &s[i].grade);
        scanf("%c", &s[i].grade);
        printf("Enter marks \n");
        scanf("%f", &x);
        s[i].marks = x;
    }
    for (i = 0; i < n; i++)
        printf("%d  %c  %f \n", s[i].rollno, s[i].grade, s[i].marks);
    getch();
}