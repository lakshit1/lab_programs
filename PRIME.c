#include<stdio.h>
#include<conio.h>

void main() {
    int n, i, flag = 0;
    clrscr();
    printf("Enter the number");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Number %d is not prime", n);
    else
        printf("Number %d is prime", n);
    getch();
}
