#include<stdio.h>
#include<conio.h>

void main() {
    int n, i;
    clrscr();
    printf("Enter the number \n");
    scanf("%d", &n);
    i = 1;
    do {
        printf("%d * %d = %d \n", n, i, n * i);
        i++;
    } while (i <= 10);

    getch();
}
