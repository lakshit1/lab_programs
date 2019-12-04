#include<stdio.h>
#include<conio.h>

int sum_of_digits(int);

void main() {
    int n, s;
    clrscr();
    printf("Enter n \n");
    scanf("%d", &n);
    s = sum_of_digits(n);
    printf("Sum of %d is %d", n, s);
    getch();
}

int sum_of_digits(int num) {
    int r, sum = 0;
    while (num > 0) {
        r = num % 10;
        sum += r;
        num = num / 10;
    }
    return (sum);
}
