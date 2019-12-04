#include<stdio.h>
#include<conio.h>

void main() {
    int n, num, sum = 0, r;
    clrscr();
    printf("Enter the number ");
    scanf("%d", &n);
    num = n;
    while (num > 0) {
        r = num % 10;
        sum += r;
        num = num / 10;
    }
    printf("\nsum of digits %d is %d", n, sum);
    getch();


}