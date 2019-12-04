#include<stdio.h>
#include<conio.h>

void main() {
    int n, a, b, c, i;
    clrscr();
    printf("Which fibonacci no. \n");
    scanf("%d", &n);
    a = 0;
    b = 1;
    if (n == 1) {
        printf("1 fibonacci no. is 0");
    } else if (n == 2) {
        printf("2 fibonacci no. is 1");
    } else {
        printf("\n%d \n%d \n", a, b);
        i = 3;
        while (i <= n) {
            c = a + b;
            a = b;
            b = c;
            i++;
            printf("%d \n", c);
        }

        printf("\n %d fibonacci no. is %d", n, c);
    }


    getch();
}