#include <stdio.h>
#include <conio.h>

#define MAX 10

void main() {
    int a[MAX], i, n, e, flag = 0, option, neg = 0, pos = 0, ze = 0;
    clrscr();
    printf("How many numbers \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Signs of elements \n");
    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            neg++;
        } else if (a[i] == 0) {
            ze++;
        } else if (a[i] > 0) {
            pos++;
        }
    }

    printf("Negative = %d, zero = %d ,Positive = %d", neg, ze, pos);


    getch();
}