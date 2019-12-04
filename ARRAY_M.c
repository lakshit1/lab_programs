#include<stdio.h>
#include<conio.h>

#define MAX 10

void printmatrix(int [MAX][MAX], int, int);

void scanmatrix(int [MAX][MAX], int, int);

void add(int [MAX][MAX], int [MAX][MAX], int [MAX][MAX], int, int);

void main() {
    int a[MAX][MAX], i, j, r1, c1, r2, c2, b[MAX][MAX], c[MAX][MAX];
    clrscr();
    printf("How many rows and columns for matrix 1 \n");
    scanf("%d %d", &r1, &c1);

    printf("How many rows and columns for matrix 2 \n");
    scanf("%d %d", &r2, &c2);


    if ((r1 == r2) && (c1 == c2)) {

        printf("Enter numbers for matrix 1 \n");
        scanmatrix(a, r1, c1);

        printf("Enter numbers for matrix 2 \n");
        scanmatrix(b, r2, c2);

        printf("Matrix 1 \n");
        printmatrix(a, r1, c1);

        printf("Matrix 2 \n");
        printmatrix(b, r2, c2);

        add(a, b, c, r1, c1);

        printf("Added matrix \n");
        printmatrix(c, r1, c1);

    } else
        printf("Matrix mismatch");

    getch();
}

void printmatrix(int x[MAX][MAX], int r3, int c3) {
    int i, j;
    for (i = 0; i < r3; i++) {
        for (j = 0; j < c3; j++)
            printf(" %d", x[i][j]);
        printf("\n");
    }
}

void scanmatrix(int x[MAX][MAX], int r3, int c3) {
    int i, j;
    for (i = 0; i < r3; i++) {
        for (j = 0; j < c3; j++)
            scanf("%d", &x[i][j]);
    }
}

void add(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int r1, int c1) {
    int i, j;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++)
            c[i][j] = a[i][j] + b[i][j];
    }


}
