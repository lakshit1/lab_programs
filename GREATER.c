#include<stdio.h>
#include<conio.h>

void main() {
    clrscr();
    int a, b;
    printf("enter the value of a,b \n");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d is greater than %d", a, b);
    } else {
        printf("%d is smaller than %d", a, b);
    }
    getch();
}                                                                 