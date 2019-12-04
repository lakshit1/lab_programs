#include<stdio.h>
#include<conio.h>

long factorial(int);

int main() {
    long f;
    int n;
    printf(" Enter number : ");
    scanf("%d", &n);
    f = factorial(n);
    printf(" The factorial of %d is %ld", n, f);
    getch();
    return 0;
}

long factorial(int x) {
    long fact = 1;
    if (x == 0)
        return 1;
    fact = x * factorial(x - 1);
    return (fact);

}
