#include<stdio.h>
#include<conio.h>

void main() {
    char sname[50];
    int length;
    clrscr();
    printf("Enter source \n");
    gets(sname);
    for (length = 0; sname[length] != '\0'; length++);
    printf("Lenght of string %d", length);
    getch();
}