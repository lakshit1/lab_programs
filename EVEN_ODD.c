#include<stdio.h>
#include<conio.h>

void main() {
    int a;
    clrscr();
    printf("Enter the no \n");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("%d is even \n", a);
    } else {
        printf("%d is odd \n", a);
    }


    getch();
}