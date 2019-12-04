#include<stdio.h>
#include<conio.h>

#define MAX 10

void main() {
    int a[MAX][MAX], i, j, r1, c1, d = 0;
    clrscr();
    printf("How many rows and columns for matrix \n");
    scanf("%d %d", &r1, &c1);


    if (c1 == r1) {

        printf("Enter numbers for matrix \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);
        }

        printf("Matrix \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++)
                printf(" %d", a[i][j]);
            printf("\n");
        }

        printf("Diagonal matrix \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                if (i == j) {
                    printf(" %d \n", a[i][j]);
                    d = d + a[i][j];
                }
            }

        }
        printf("Sum of diagonal elements = %d", d);

    } else
        printf("\nRows and Columns mismatch");

    getch();
}