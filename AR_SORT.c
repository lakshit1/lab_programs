#include<stdio.h>
#include<conio.h>

#define MAX 10

void sort(int[MAX], int);

void main() {
    int a[MAX], i, n;
    clrscr();
    printf("How many elements \n");
    scanf("%d", &n);
    printf("\nEnter elements \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Elements \n");
    for (i = 0; i < n; i++)
        printf(" %d \n", a[i]);
    sort(a, n);
    printf("Array after sorting \n");
    for (i = 0; i < n; i++)
        printf(" %d \n", a[i]);

    getch();
}

void sort(int a[MAX], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
}

