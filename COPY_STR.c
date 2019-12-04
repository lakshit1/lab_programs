#include<stdio.h>
#include<conio.h>

void main() {
    char sname[50], tname[50];
    int i;
    printf("Enter source");
    gets(sname);
    for (i = 0; sname[i] != '\0'; i++)
        tname[i] = sname[i];
    tname[i] = '\0';
    printf("Copied string");
    puts(tname);
    getch();
}