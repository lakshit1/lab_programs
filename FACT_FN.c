#include<stdio.h>
#include<conio.h>

long factorial(int);

void main() {
    int n;
    long f = 1;
    clrscr();
    printf("Enter n \n");
    scanf("%d", &n);
    f = factorial(n);
    printf("The factorial of %d is %ld", n, f);
    getch();
}

long factorial(int x) {
    int i;
    long fact = 1;
    for (i = x; i >= 1; i--)
        fact = fact * i;
    return (fact);
}
