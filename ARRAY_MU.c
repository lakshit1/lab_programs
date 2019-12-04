#include<stdio.h>
#include<conio.h>

#define MAX 10

void main() {
    int a[MAX][MAX], i, j, k, r1, c1, r2, c2, b[MAX][MAX], c[MAX][MAX];
    clrscr();
    printf("How many rows and columns for matrix 1 \n");
    scanf("%d %d", &r1, &c1);

    printf("How many rows and columns for matrix 2 \n");
    scanf("%d %d", &r2, &c2);


    if (c1 == r2) {

        printf("Enter numbers for matrix 1 \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);
        }

        printf("Enter numbers for matrix 2 \n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++)
                scanf("%d", &b[i][j]);
        }

        printf("Matrix 1 \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++)
                printf(" %d", a[i][j]);
            printf("\n");
        }

        printf("Matrix 2 \n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++)
                printf(" %d", b[i][j]);
            printf("\n");
        }

        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
        }

        printf("Multiplied matrix \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++)
                printf(" %d", c[i][j]);
            printf("\n");
        }

    } else
        printf("Rows and Columns mismatch");

    getch();
}