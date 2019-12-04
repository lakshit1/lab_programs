#include<stdio.h>
#include<conio.h>

void main() {
    int n, num, r, rev = 0;
    clrscr();
    printf("Enter the number ");
    scanf("%d", &n);
    num = n;
    while (num > 0) {
        r = num % 10;
        num = num / 10;
        rev = (rev * 10) + r;
    }
    if (rev == n)
        printf("Number %d is palandrone", n);
    else
        printf("Number %d is not palandrone", n);
    getch();
}