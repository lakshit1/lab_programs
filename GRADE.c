#include<stdio.h>
#include<conio.h>

void main() {
    float m1, m2, m3, m4, m5, avg;
    clrscr();
    printf("Enter marks in five subjects \n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    avg = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("Percentage of the student is = %f \n", avg);
    if (avg > 90) {
        printf("A");
    } else if (avg > 80) {
        printf("B");
    } else if (avg > 70) {
        printf("c");
    } else if (avg > 60) {
        printf("D");
    } else {
        printf("Fail");
    }
    getch();
}