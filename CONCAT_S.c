#include<stdio.h>
#include<conio.h>

void main() {
    char a[50], b[50], c[50];
    int i, j, k;
    printf("Enter first string \n");
    gets(a);
    printf("Enter second string \n");
    gets(b);
    for (i = 0, k = 0; a[i] != '\0'; i++, k++)
        c[k] = a[i];
    c[k] = ' ';
    k++;
    for (j = 0; b[j] != '\0'; j++, k++)
        c[k] = b[j];
    puts(c);
    getch();
}