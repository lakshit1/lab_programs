#include<stdio.h>
#include<conio.h>

void main() {
    int n, i, j;
    clrscr();
    printf("how many stars ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("\n");
        for (j = 1; j <= n; j++) {
            printf("*");
        }
    }

    getch();
}