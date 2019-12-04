#include<stdio.h>
#include<conio.h>

void swap_value(int, int);

void swap_ref(int *, int *);

void main() {
    int a, b;
    clrscr();
    printf("Enter a and b \n");
    scanf("%d %d", &a, &b);
    swap_value(a, b);
    printf("By value a = %d, b = %d \n", a, b);
    swap_ref(&a, &b);
    printf("By ref a = %d, b = %d", a, b);
    getch();
}

void swap_value(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_ref(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
