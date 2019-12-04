#include<stdio.h>
#include<conio.h>

void main() {
    long int f = 1;
    int i, n;
    clrscr();
    printf("Enter a number \n");
    scanf("%d", &n);
    i = n;
    while (i > 1) {
        f *= i;
        i--;
    }
    printf("Factorial of %d is %ld \n", n, f);


    getch();
}