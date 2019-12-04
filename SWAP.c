#include<stdio.h>
#include<conio.h>

void main() {
    int a, b;
    clrscr();
    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    printf("Before swap a=%d, b=%d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap a=%d, b=%d \n", a, b);


    getch();
}